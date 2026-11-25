/* FRONTEND:0x022840 -- forwards its arguments to the 3-argument global-record helper with the record pointer taken 0x1C4 into the global base. */
extern char *D_0010BE50;
extern int func_022760(int *table, unsigned int index, int value);

void func_022840(int first, const void *second)
{
    func_022760((int *)(D_0010BE50 + 0x1C4), first, (int)second);
}
