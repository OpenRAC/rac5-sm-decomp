/* LEVEL_22:0x02D378 -- placement copy of LEVEL_01_037428.c: tests a flag bit in the record and compares a helper result to a constant. */
extern char D_00002D78[];
extern void func_0319C0(void *obj);
extern int func_000EA0(int);

long long func_02D378(char *record)
{
    long long r;
    int t;

    func_0319C0(record);
    r = 0;
    if ((int)(*(long long *)(record + 0x968) >> 3) & 1) {
        t = func_000EA0(0) == (int)D_00002D78;
        r = t;
    }
    return r;
}
