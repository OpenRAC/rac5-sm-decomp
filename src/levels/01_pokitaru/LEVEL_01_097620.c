extern void func_097500(void *h);

void func_097620(char *record)
{
    func_097500(record);
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
