/* LEVEL_17:0x032EE8 -- placement copy of LEVEL_01_037428.c: tests a flag bit in the record and compares a helper result to a constant. */
extern char D_001161A8[];
extern void func_037618(void *obj);
extern int func_000D28(int);

long long func_032EE8(char *record)
{
    long long r;
    int t;

    func_037618(record);
    r = 0;
    if ((int)(*(long long *)(record + 0x968) >> 3) & 1) {
        t = func_000D28(0) == (int)D_001161A8;
        r = t;
    }
    return r;
}
