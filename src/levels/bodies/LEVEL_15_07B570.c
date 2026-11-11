extern void func_07B450(void *h);

void func_07B570(char *record)
{
    func_07B450(record);
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
