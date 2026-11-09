/* LEVEL_01:0x176358 -- placement copy of LEVEL_01_175350.c: calls a helper on a record with a table address, then a second helper on its field at offset 0x1C. */
extern char D_00221898[];
extern void func_09FB18(void *, int);
extern void func_0340B8(void *, long long, int);

void func_176358(char *record, long long value)
{
    func_09FB18(record, (int)D_00221898);
    func_0340B8(record + 0x1c, value, 0xffff);
}
