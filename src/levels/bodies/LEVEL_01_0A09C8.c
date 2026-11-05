extern char D_0029C8C0[];
extern void func_0A09B0(unsigned short, unsigned short);

void func_0A09C8(int value)
{
    char *base = D_0029C8C0;
    *(int *)(base + 0x20d8) = value;
    func_0A09B0(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
