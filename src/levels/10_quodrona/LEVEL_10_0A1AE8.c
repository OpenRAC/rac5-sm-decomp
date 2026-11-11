extern char D_002A5CC0[];
extern void func_0A1AD0(unsigned short, unsigned short);

void func_0A1AE8(int value)
{
    char *base = D_002A5CC0;
    *(int *)(base + 0x20d8) = value;
    func_0A1AD0(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
