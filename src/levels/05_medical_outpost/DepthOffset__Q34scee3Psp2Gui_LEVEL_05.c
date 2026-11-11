extern char D_00288780[];
extern void func_09EF68(unsigned short, unsigned short);

void DepthOffset__Q34scee3Psp2Gui(int value)
{
    char *base = D_00288780;
    *(int *)(base + 0x20d8) = value;
    func_09EF68(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
