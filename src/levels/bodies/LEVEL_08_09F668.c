extern void func_09F548(void);

void func_09F668(char *record)
{
    func_09F548();
    *(int *)(record + 0xc) = 0;
    *(unsigned short *)(record + 0x10) = 0x100;
    *(int *)(record + 8) = 0;
}
