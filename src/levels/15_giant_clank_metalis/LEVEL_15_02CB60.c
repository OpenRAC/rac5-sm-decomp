/* LEVEL_15:0x02CB60 -- placement copy of LEVEL_01_037428.c: tests a flag bit in the record and compares a helper result to a constant. */
extern char D_00002B60[];
extern void func_02F6D8(void *obj);
extern int func_000C18(int);

long long func_02CB60(char *record)
{
    long long r;
    int t;

    func_02F6D8(record);
    r = 0;
    if ((int)(*(long long *)(record + 0x968) >> 3) & 1) {
        t = func_000C18(0) == (int)D_00002B60;
        r = t;
    }
    return r;
}
