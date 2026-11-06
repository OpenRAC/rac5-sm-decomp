extern void func_0994B0(void);

void func_0995D0(char *record)
{
    func_0994B0();
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
