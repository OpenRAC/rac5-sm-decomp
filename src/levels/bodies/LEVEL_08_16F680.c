/* LEVEL_08:0x16F680 -- collects a list of handles and runs a check and a follow-up on each. */
extern int D_00278508;
extern int D_0027850C;
extern unsigned int func_01CD60(void *a, int b, void *c, int d, int e, int f, int g);
extern int func_2025D0(void *a);
extern void func_2025E8(void *a);

void func_16F680(void *a0, float scale)
{
    void *buf[16];
    unsigned int n;
    unsigned int i;
    void *h;

    n = func_01CD60(buf, 16, a0, -1, D_00278508, D_0027850C, 1);
    for (i = 0; i < n; i++) {
        h = buf[i];
        if (func_2025D0(h) != 0) {
            func_2025E8(h);
        }
    }
}
