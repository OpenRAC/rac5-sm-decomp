extern void func_088AB0(void *h);

void func_088BD0(char *record)
{
    func_088AB0(record);
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
