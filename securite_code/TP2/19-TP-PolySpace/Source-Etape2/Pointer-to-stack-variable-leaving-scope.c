int *pGlobalList = 0;
void Add1(int *pItem)
{
	pGlobalList = pItem;
} void Add2(int **pList, int *pItem)
{
	*pList = pItem;
} void entry_A(void)
{
	int a;
	Add1(&a);
} void entry_B(void)
{
	int a;
	Add2(&pGlobalList, &a);
}
