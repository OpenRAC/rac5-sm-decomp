extern char D_001B4900[];
extern void func_081318(unsigned short, unsigned short);

void DepthOffset__Q34scee3Psp2Gui(int value)
{
    char *base = D_001B4900;
    *(int *)(base + 0x20d8) = value;
    func_081318(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
