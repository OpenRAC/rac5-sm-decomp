extern char *D_001A540C;
extern void func_079880(int);

void func_079828(unsigned int mask, int index)
{
    func_079880(index);
    *(unsigned int *)(D_001A540C + 0x100) =
        mask & *(unsigned int *)(D_001A540C + 0x1f8);
    func_079880(0);
}
