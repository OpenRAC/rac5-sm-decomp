extern void func_094B60(void);

void func_094C80(char *record)
{
    func_094B60();
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
