extern void func_01BA68(void *, int, void *, int, int, int, int);

void func_1C40B8(char *record)
{
    char scratch[128];
    func_01BA68(scratch, 0x20, record + 0x30, 0x129, 0x101, 2, 1);
}
