/* LEVEL_19:0x0ABA38 -- placement copy of LEVEL_01_0BCCD0.c: when the second argument is all-ones, either resets a three-word record with a unit float and calls one helper, or calls a second helper with a count of two. */

extern unsigned char D_00276AE0[];
extern unsigned char D_00276AF0[];

void *func_0AB9E8(unsigned char *p);
void func_0ABA10(unsigned char *p, int n);

void func_0ABA38(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            unsigned int *w;
            float *f;
            unsigned char *p;

            w = (unsigned int *)D_00276AE0;
            f = (float *)D_00276AE0;
            f[3] = 1.0f;
            w[0] = 0;
            p = D_00276AF0;
            w[2] = 0;
            w[1] = 0;
            func_0AB9E8(p + 0x34);
        } else {
            unsigned char *p;

            p = D_00276AF0;
            func_0ABA10(p + 0x34, 2);
        }
    }
}
