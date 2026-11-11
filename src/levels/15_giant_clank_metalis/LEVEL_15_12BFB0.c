/* LEVEL_15:0x12BFB0 -- masks a state word, then runs two helpers on a stack record. */
extern char D_0012B840[];
extern void func_07A808(void *rec, unsigned int mode, void *tab, int n, int a4, int a5, int a6);
extern int func_07A9E0(void *rec);

int func_12BFB0(unsigned int a0)
{
    unsigned int rec[4];

    a0 = (a0 & 0xFFFFFFC3) | 4;
    func_07A808(rec, a0 & 0xFFFFFFFC, D_0012B840, 44, 0, -1, 0);
    return func_07A9E0(rec);
}
