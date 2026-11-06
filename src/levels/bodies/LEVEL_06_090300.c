extern void func_0901E0(void);

void func_090300(char *record)
{
    func_0901E0();
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
