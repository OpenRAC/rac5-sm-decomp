extern void func_09A5F8(void);

void func_09A718(char *record)
{
    func_09A5F8();
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
