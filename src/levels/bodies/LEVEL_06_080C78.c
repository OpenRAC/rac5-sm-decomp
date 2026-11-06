extern char *D_001E515C;
extern void func_080CD0(int);

void func_080C78(unsigned int mask, int index)
{
    func_080CD0(index);
    *(unsigned int *)(D_001E515C + 0x100) =
        mask & *(unsigned int *)(D_001E515C + 0x1f8);
    func_080CD0(0);
}
