/* LEVEL_19:0x032930 -- placement copy of LEVEL_01_037428.c: tests a flag bit in the record and compares a helper result to a constant. */
extern char D_001171C0[];
extern void func_037058(void *obj);
extern int func_000D28(int);

long long func_032930(char *record)
{
    long long r;
    int t;

    func_037058(record);
    r = 0;
    if ((int)(*(long long *)(record + 0x968) >> 3) & 1) {
        t = func_000D28(0) == (int)D_001171C0;
        r = t;
    }
    return r;
}
