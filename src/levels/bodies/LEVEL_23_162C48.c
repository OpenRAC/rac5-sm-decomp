/* LEVEL_23:0x162C48 -- placement copy of LEVEL_01_175350.c: calls a helper on a record with a table address, then a second helper on its field at offset 0x1C. */
extern char D_001F2E38[];
extern void func_096860(void *, int);
extern void func_02D890(void *, long long, int);

void func_162C48(char *record, long long value)
{
    func_096860(record, (int)D_001F2E38);
    func_02D890(record + 0x1c, value, 0xffff);
}
