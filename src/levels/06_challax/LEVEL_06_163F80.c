/* LEVEL_06:0x163F80 -- placement copy of LEVEL_01_175350.c: calls a helper on a record with a table address, then a second helper on its field at offset 0x1C. */
extern char D_0020F0B8[];
extern void func_09A2F0(void *, int);
extern void func_030B08(void *, long long, int);

void func_163F80(char *record, long long value)
{
    func_09A2F0(record, (int)D_0020F0B8);
    func_030B08(record + 0x1c, value, 0xffff);
}
