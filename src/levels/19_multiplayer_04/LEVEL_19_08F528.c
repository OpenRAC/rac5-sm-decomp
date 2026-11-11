extern char D_00254590[];
extern void func_08F510(unsigned short, unsigned short);

void func_08F528(int value)
{
    char *base = D_00254590;
    *(int *)(base + 0x20d8) = value;
    func_08F510(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
