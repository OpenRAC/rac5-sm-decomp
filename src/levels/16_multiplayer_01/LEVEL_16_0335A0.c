/* LEVEL_16:0x0335A0 -- placement copy of LEVEL_01_037428.c: tests a flag bit in the record and compares a helper result to a constant. */
extern char D_00116A60[];
extern void func_037D78(void *obj);
extern int func_000D28(int);

long long func_0335A0(char *record)
{
    long long r;
    int t;

    func_037D78(record);
    r = 0;
    if ((int)(*(long long *)(record + 0x968) >> 3) & 1) {
        t = func_000D28(0) == (int)D_00116A60;
        r = t;
    }
    return r;
}
