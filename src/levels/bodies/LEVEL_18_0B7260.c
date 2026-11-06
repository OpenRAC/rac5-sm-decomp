extern int D_001B01C4;
extern int D_001D1A20;
extern char *D_001A2F34;
extern void func_10ED58(int, int);

void func_0B7260(void)
{
    D_001B01C4 = 4;
    func_10ED58(D_001D1A20, *(int *)(D_001A2F34 + 0x3c));
}
