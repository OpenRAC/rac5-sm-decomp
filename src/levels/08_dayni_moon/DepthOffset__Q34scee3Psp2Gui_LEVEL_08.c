extern char D_002EBB40[];
extern void func_0AB2B0(unsigned short, unsigned short);

void DepthOffset__Q34scee3Psp2Gui(int value)
{
    char *base = D_002EBB40;
    *(int *)(base + 0x20d8) = value;
    func_0AB2B0(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
