/* LEVEL_03:0x035668 -- placement copy of LEVEL_01_037428.c: tests a flag bit in the record and compares a helper result to a constant. */
extern char D_00003030[];
extern void func_03A0C0(void *obj);
extern int func_0010C0(int);

long long func_035668(char *record)
{
    long long r;
    int t;

    func_03A0C0(record);
    r = 0;
    if ((int)(*(long long *)(record + 0x968) >> 3) & 1) {
        t = func_0010C0(0) == (int)D_00003030;
        r = t;
    }
    return r;
}
