/* LEVEL_10:0x035DD8 -- placement copy of LEVEL_01_037428.c: tests a flag bit in the record and compares a helper result to a constant. */
extern char D_00002DB8[];
extern void func_03A4E8(void *obj);
extern int func_000E50(int);

long long func_035DD8(char *record)
{
    long long r;
    int t;

    func_03A4E8(record);
    r = 0;
    if ((int)(*(long long *)(record + 0x968) >> 3) & 1) {
        t = func_000E50(0) == (int)D_00002DB8;
        r = t;
    }
    return r;
}
