extern char D_002B3DC0[];
extern void func_0A72C8(unsigned short, unsigned short);

void func_0A72E0(int value)
{
    char *base = D_002B3DC0;
    *(int *)(base + 0x20d8) = value;
    func_0A72C8(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
