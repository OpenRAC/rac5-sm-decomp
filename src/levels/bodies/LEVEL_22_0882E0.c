extern void func_0881C0(void);

void func_0882E0(char *record)
{
    func_0881C0();
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
