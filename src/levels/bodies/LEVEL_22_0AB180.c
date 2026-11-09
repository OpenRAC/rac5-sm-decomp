/* LEVEL_22:0x0AB180 -- placement copy of LEVEL_01_0BCCD0.c: when the second argument is all-ones, either resets a three-word record with a unit float and calls one helper, or calls a second helper with a count of two. */

extern unsigned char D_0027E5E0[];
extern unsigned char D_0027E5F0[];

void *func_0AB130(unsigned char *p);
void func_0AB158(unsigned char *p, int n);

void func_0AB180(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            unsigned int *w;
            float *f;
            unsigned char *p;

            w = (unsigned int *)D_0027E5E0;
            f = (float *)D_0027E5E0;
            f[3] = 1.0f;
            w[0] = 0;
            p = D_0027E5F0;
            w[2] = 0;
            w[1] = 0;
            func_0AB130(p + 0x34);
        } else {
            unsigned char *p;

            p = D_0027E5F0;
            func_0AB158(p + 0x34, 2);
        }
    }
}
