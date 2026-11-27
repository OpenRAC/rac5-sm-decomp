/* LEVEL_02:0x03BE70 -- placement copy of LEVEL_01_037428.c: tests a flag bit in the record and compares a helper result to a constant. */
extern char D_00003008[];
extern void func_040D18(void *obj);
extern int func_0010C0(int);

long long func_03BE70(char *record)
{
    long long r;
    int t;

    func_040D18(record);
    r = 0;
    if ((int)(*(long long *)(record + 0x968) >> 3) & 1) {
        t = func_0010C0(0) == (int)D_00003008;
        r = t;
    }
    return r;
}
