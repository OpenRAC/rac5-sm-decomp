extern char D_00254410[];
extern void func_08FC78(unsigned short, unsigned short);

void DepthOffset__Q34scee3Psp2Gui(int value)
{
    char *base = D_00254410;
    *(int *)(base + 0x20d8) = value;
    func_08FC78(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
