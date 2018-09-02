#include "Account.h"
#include "CurrentAccount.h"
#include "SavingAccount.h"

int main()
{
	Account* acc1 = new CurrentAccount();
	acc1->handle("LiLei","123456");
	return 0;
}
