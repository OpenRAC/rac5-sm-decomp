extern void func_088520(void);

void func_088640(char *record)
{
    func_088520();
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
