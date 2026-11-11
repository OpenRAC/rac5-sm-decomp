extern void func_097258(void *h);

void func_097378(char *record)
{
    func_097258(record);
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
