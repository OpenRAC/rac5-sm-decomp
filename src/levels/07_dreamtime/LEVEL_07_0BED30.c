/* LEVEL_07:0x0BED30 -- placement copy of LEVEL_01_0BCCD0.c: when the second argument is all-ones, either resets a three-word record with a unit float and calls one helper, or calls a second helper with a count of two. */

extern unsigned char D_0033E320[];
extern unsigned char D_0033E330[];

void *func_0BECE0(unsigned char *p);
void func_0BED08(unsigned char *p, int n);

void func_0BED30(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            unsigned int *w;
            float *f;
            unsigned char *p;

            w = (unsigned int *)D_0033E320;
            f = (float *)D_0033E320;
            f[3] = 1.0f;
            w[0] = 0;
            p = D_0033E330;
            w[2] = 0;
            w[1] = 0;
            func_0BECE0(p + 0x34);
        } else {
            unsigned char *p;

            p = D_0033E330;
            func_0BED08(p + 0x34, 2);
        }
    }
}
