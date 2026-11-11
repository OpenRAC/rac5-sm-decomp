/* LEVEL_01:0x175350 -- calls a helper on a record with a table address, then a second helper on its field at offset 0x1C. */
extern char D_002215E0[];
extern void func_09FB18(void *, int);
extern void func_0340B8(void *, long long, int);

void func_175350(char *record, long long value)
{
    func_09FB18(record, (int)D_002215E0);
    func_0340B8(record + 0x1c, value, 0xffff);
}
