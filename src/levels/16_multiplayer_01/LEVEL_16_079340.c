extern char *D_001A428C;
extern void func_079398(int);

void func_079340(unsigned int mask, int index)
{
    func_079398(index);
    *(unsigned int *)(D_001A428C + 0x100) =
        mask & *(unsigned int *)(D_001A428C + 0x1f8);
    func_079398(0);
}
