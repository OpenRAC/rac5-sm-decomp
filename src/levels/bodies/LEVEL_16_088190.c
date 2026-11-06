extern void func_088070(void);

void func_088190(char *record)
{
    func_088070();
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
