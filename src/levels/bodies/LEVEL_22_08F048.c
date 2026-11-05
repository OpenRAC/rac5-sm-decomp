extern char D_001F2480[];
extern void func_08F030(unsigned short, unsigned short);

void func_08F048(int value)
{
    char *base = D_001F2480;
    *(int *)(base + 0x20d8) = value;
    func_08F030(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
