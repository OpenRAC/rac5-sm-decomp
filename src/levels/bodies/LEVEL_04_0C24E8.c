/* LEVEL_04:0x0C24E8 -- placement copy of LEVEL_01_0BCCD0.c: when the second argument is all-ones, either resets a three-word record with a unit float and calls one helper, or calls a second helper with a count of two. */

extern unsigned char D_00343220[];
extern unsigned char D_00343230[];

void *func_0C2498(unsigned char *p);
void func_0C24C0(unsigned char *p, int n);

void func_0C24E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            unsigned int *w;
            float *f;
            unsigned char *p;

            w = (unsigned int *)D_00343220;
            f = (float *)D_00343220;
            f[3] = 1.0f;
            w[0] = 0;
            p = D_00343230;
            w[2] = 0;
            w[1] = 0;
            func_0C2498(p + 0x34);
        } else {
            unsigned char *p;

            p = D_00343230;
            func_0C24C0(p + 0x34, 2);
        }
    }
}
