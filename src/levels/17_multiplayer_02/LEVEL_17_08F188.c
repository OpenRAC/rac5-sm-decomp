extern char D_00245710[];
extern void func_08F170(unsigned short, unsigned short);

void func_08F188(int value)
{
    char *base = D_00245710;
    *(int *)(base + 0x20d8) = value;
    func_08F170(*(unsigned short *)(base + 0x20d4),
               *(unsigned short *)(base + 0x20d6));
}
