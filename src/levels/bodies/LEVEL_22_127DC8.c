/* LEVEL_22:0x127DC8 -- placement copy of LEVEL_01_175350.c: calls a helper on a record with a table address, then a second helper on its field at offset 0x1C. */
extern char D_0017AAC0[];
extern void func_08E1C8(void *, int);
extern void func_02A2B0(void *, long long, int);

void func_127DC8(char *record, long long value)
{
    func_08E1C8(record, (int)D_0017AAC0);
    func_02A2B0(record + 0x1c, value, 0xffff);
}
