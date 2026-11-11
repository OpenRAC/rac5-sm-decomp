extern char D_00268780[];
extern void func_09A230(unsigned short, unsigned short);

void func_09A248(int value)
{
    char *base = D_00268780;
    *(int *)(base + 0x20d8) = value;
    func_09A230(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
