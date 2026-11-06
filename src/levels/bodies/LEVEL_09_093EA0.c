extern void func_093D80(void);

void func_093EA0(char *record)
{
    func_093D80();
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
