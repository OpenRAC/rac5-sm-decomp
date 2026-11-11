/* LEVEL_15:0x13CBB0 -- masks a state word, then runs two helpers on a stack record. */
extern char D_0013BD00[];
extern void func_07A808(void *rec, unsigned int mode, void *tab, int n, int a4, int a5, int a6);
int func_07A9E0(void *rec);

int func_13CBB0(unsigned int a0)
{
    unsigned int rec[4];
    unsigned int m;

    m = (a0 & 0xFFFFFFC3) | 4;
    m = (m & 0xFFFFFFFC) | 1;
    func_07A808(rec, m, D_0013BD00, 32, 0, -1, 0);
    return func_07A9E0(rec);
}
