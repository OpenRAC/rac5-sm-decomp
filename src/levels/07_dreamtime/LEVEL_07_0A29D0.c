extern char D_002B21C0[];
extern void func_0A29B8(unsigned short, unsigned short);

void func_0A29D0(int value)
{
    char *base = D_002B21C0;
    *(int *)(base + 0x20d8) = value;
    func_0A29B8(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
