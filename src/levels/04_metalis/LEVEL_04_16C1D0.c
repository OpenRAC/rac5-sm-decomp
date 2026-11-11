extern void func_01C068(void *, int, void *, int, int, int, int);

void func_16C1D0(char *record)
{
    char scratch[128];
    func_01C068(scratch, 0x20, record + 0x30, 0x129, 0x101, 2, 1);
}
