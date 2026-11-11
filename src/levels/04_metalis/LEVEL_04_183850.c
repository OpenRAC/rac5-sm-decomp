/* LEVEL_04:0x183850 -- placement copy of LEVEL_01_175350.c: calls a helper on a record with a table address, then a second helper on its field at offset 0x1C. */
extern char D_0023B538[];
extern void func_0A4D30(void *, int);
extern void func_035700(void *, long long, int);

void func_183850(char *record, long long value)
{
    func_0A4D30(record, (int)D_0023B538);
    func_035700(record + 0x1c, value, 0xffff);
}
