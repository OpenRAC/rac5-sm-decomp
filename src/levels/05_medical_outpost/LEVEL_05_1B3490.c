extern void func_01B980(void *, int, void *, int, int, int, int);

void func_1B3490(char *record)
{
    char scratch[128];
    func_01B980(scratch, 0x20, record + 0x30, 0x129, 0x101, 2, 1);
}
