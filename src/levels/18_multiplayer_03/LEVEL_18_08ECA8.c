extern char D_00254790[];
extern void func_08EC90(unsigned short, unsigned short);

void func_08ECA8(int value)
{
    char *base = D_00254790;
    *(int *)(base + 0x20d8) = value;
    func_08EC90(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
