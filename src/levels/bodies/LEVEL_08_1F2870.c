extern void func_01CD60(void *, int, void *, int, int, int, int);

void func_1F2870(char *record)
{
    char scratch[128];
    func_01CD60(scratch, 0x20, record + 0x30, 0x129, 0x101, 2, 1);
}
