#include "ProxySearcher.h"


int main()
{
	Searcher* search = new ProxySearcher();
	search->DoSearch("Jock","HelloWorld");
	return 0;
}
