extern void func_09DBD0(void);

void func_09DCF0(char *record)
{
    func_09DBD0();
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
