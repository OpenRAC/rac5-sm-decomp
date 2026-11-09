/* LEVEL_23:0x163C50 -- placement copy of LEVEL_01_175350.c: calls a helper on a record with a table address, then a second helper on its field at offset 0x1C. */
extern char D_001F30F0[];
extern void func_096860(void *, int);
extern void func_02D890(void *, long long, int);

void func_163C50(char *record, long long value)
{
    func_096860(record, (int)D_001F30F0);
    func_02D890(record + 0x1c, value, 0xffff);
}
