/* LEVEL_18:0x031E70 -- placement copy of LEVEL_01_037428.c: tests a flag bit in the record and compares a helper result to a constant. */
extern char D_00115820[];
extern void func_036608(void *obj);
extern int func_000D28(int);

long long func_031E70(char *record)
{
    long long r;
    int t;

    func_036608(record);
    r = 0;
    if ((int)(*(long long *)(record + 0x968) >> 3) & 1) {
        t = func_000D28(0) == (int)D_00115820;
        r = t;
    }
    return r;
}
