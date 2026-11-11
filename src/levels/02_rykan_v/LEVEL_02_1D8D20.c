extern void func_01CD48(void *, int, void *, int, int, int, int);

void func_1D8D20(char *record)
{
    char scratch[128];
    func_01CD48(scratch, 0x20, record + 0x30, 0x129, 0x101, 2, 1);
}
