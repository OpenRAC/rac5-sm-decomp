extern char D_0026DD00[];
extern void func_0976F8(unsigned short, unsigned short);

void DepthOffset__Q34scee3Psp2Gui(int value)
{
    char *base = D_0026DD00;
    *(int *)(base + 0x20d8) = value;
    func_0976F8(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
