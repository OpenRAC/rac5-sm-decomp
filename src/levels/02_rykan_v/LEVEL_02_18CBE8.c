/* LEVEL_02:0x18CBE8 -- placement copy of LEVEL_01_175350.c: calls a helper on a record with a table address, then a second helper on its field at offset 0x1C. */
extern char D_00238D10[];
extern void func_0A6408(void *, int);
extern void func_038B00(void *, long long, int);

void func_18CBE8(char *record, long long value)
{
    func_0A6408(record, (int)D_00238D10);
    func_038B00(record + 0x1c, value, 0xffff);
}
