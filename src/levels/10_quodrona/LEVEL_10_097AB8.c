extern void func_097998(void *h);

void func_097AB8(char *record)
{
    func_097998(record);
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
