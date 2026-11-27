/* LEVEL_04:0x038A70 -- placement copy of LEVEL_01_037428.c: tests a flag bit in the record and compares a helper result to a constant. */
extern char D_00002E10[];
extern void func_03D800(void *obj);
extern int func_000EC8(int);

long long func_038A70(char *record)
{
    long long r;
    int t;

    func_03D800(record);
    r = 0;
    if ((int)(*(long long *)(record + 0x968) >> 3) & 1) {
        t = func_000EC8(0) == (int)D_00002E10;
        r = t;
    }
    return r;
}
