extern char D_00289640[];
extern void func_09B188(unsigned short, unsigned short);

void func_09B1A0(int value)
{
    char *base = D_00289640;
    *(int *)(base + 0x20d8) = value;
    func_09B188(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
