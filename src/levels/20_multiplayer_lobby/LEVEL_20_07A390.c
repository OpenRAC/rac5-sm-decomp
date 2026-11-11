extern char D_00177C50[];
extern void func_07A378(unsigned short, unsigned short);

void func_07A390(int value)
{
    char *base = D_00177C50;
    *(int *)(base + 0x20d8) = value;
    func_07A378(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
