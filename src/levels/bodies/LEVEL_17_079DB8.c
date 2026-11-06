extern char *D_0019788C;
extern void func_079E10(int);

void func_079DB8(unsigned int mask, int index)
{
    func_079E10(index);
    *(unsigned int *)(D_0019788C + 0x100) =
        mask & *(unsigned int *)(D_0019788C + 0x1f8);
    func_079E10(0);
}
