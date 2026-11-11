extern char D_002B7740[];
extern void func_0A0738(unsigned short, unsigned short);

void func_0A0750(int value)
{
    char *base = D_002B7740;
    *(int *)(base + 0x20d8) = value;
    func_0A0738(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
