/* LEVEL_16:0x0AC160 -- placement copy of LEVEL_01_0BCCD0.c: when the second argument is all-ones, either resets a three-word record with a unit float and calls one helper, or calls a second helper with a count of two. */

extern unsigned char D_00276960[];
extern unsigned char D_00276970[];

void *func_0AC110(unsigned char *p);
void func_0AC138(unsigned char *p, int n);

void func_0AC160(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            unsigned int *w;
            float *f;
            unsigned char *p;

            w = (unsigned int *)D_00276960;
            f = (float *)D_00276960;
            f[3] = 1.0f;
            w[0] = 0;
            p = D_00276970;
            w[2] = 0;
            w[1] = 0;
            func_0AC110(p + 0x34);
        } else {
            unsigned char *p;

            p = D_00276970;
            func_0AC138(p + 0x34, 2);
        }
    }
}
