/* LEVEL_02:0x0C35E0 -- placement copy of LEVEL_01_0BCCD0.c: when the second argument is all-ones, either resets a three-word record with a unit float and calls one helper, or calls a second helper with a count of two. */

extern unsigned char D_0033FF20[];
extern unsigned char D_0033FF30[];

void *func_0C3590(unsigned char *p);
void func_0C35B8(unsigned char *p, int n);

void func_0C35E0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            unsigned int *w;
            float *f;
            unsigned char *p;

            w = (unsigned int *)D_0033FF20;
            f = (float *)D_0033FF20;
            f[3] = 1.0f;
            w[0] = 0;
            p = D_0033FF30;
            w[2] = 0;
            w[1] = 0;
            func_0C3590(p + 0x34);
        } else {
            unsigned char *p;

            p = D_0033FF30;
            func_0C35B8(p + 0x34, 2);
        }
    }
}
