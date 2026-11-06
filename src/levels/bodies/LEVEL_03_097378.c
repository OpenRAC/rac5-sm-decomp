extern void func_097258(void);

void func_097378(char *record)
{
    func_097258();
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
