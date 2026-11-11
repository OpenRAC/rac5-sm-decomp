extern void func_075810(void *h);

void func_075930(char *record)
{
    func_075810(record);
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
