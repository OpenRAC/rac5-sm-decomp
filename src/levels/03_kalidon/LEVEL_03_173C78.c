/* LEVEL_03:0x173C78 -- placement copy of LEVEL_01_175350.c: calls a helper on a record with a table address, then a second helper on its field at offset 0x1C. */
extern char D_0023AC20[];
extern void func_09F8A0(void *, int);
extern void func_0322F8(void *, long long, int);

void func_173C78(char *record, long long value)
{
    func_09F8A0(record, (int)D_0023AC20);
    func_0322F8(record + 0x1c, value, 0xffff);
}
