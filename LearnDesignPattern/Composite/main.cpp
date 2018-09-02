#include "AbstractFile.h"
#include "ImageFile.h"
#include "TextFile.h"
#include "VideoFile.h"
#include "Folder.h"

int main()
{
	AbstractFile* folder1 = new Folder("LiLei DownFile");
	AbstractFile* folder2 = new Folder("ImageFile");
	AbstractFile* folder3 = new Folder("TextFile");
	AbstractFile* folder4 = new Folder("VideoFile");

	AbstractFile* file1 = new ImageFile("girl.png");
	AbstractFile* file2 = new ImageFile("helloworld.jpg");
	AbstractFile* file3 = new TextFile("log.txt");
	AbstractFile* file4 = new VideoFile("RangZiDanFei.mp4");
	AbstractFile* file5 = new VideoFile("HapplyDay.hd");

	folder2->add(file1);
	folder2->add(file2);
	folder3->add(file3);
	folder4->add(file4);
	folder4->add(file5);
	folder1->add(folder2);
	folder1->add(folder3);
	folder1->add(folder4);
	folder1->killVirus();
	return 0;

}
