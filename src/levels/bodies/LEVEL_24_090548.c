extern void func_090428(void);

void func_090548(char *record)
{
    func_090428();
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
