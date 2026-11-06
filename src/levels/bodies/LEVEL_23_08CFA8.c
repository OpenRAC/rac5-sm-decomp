extern void func_08CE88(void);

void func_08CFA8(char *record)
{
    func_08CE88();
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
