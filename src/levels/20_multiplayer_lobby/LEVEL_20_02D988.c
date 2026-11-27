/* LEVEL_20:0x02D988 -- placement copy of LEVEL_01_037428.c: tests a flag bit in the record and compares a helper result to a constant. */
extern char D_000E9348[];
extern void func_032060(void *obj);
extern int func_000CE8(int);

long long func_02D988(char *record)
{
    long long r;
    int t;

    func_032060(record);
    r = 0;
    if ((int)(*(long long *)(record + 0x968) >> 3) & 1) {
        t = func_000CE8(0) == (int)D_000E9348;
        r = t;
    }
    return r;
}
