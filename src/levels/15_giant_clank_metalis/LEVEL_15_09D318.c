/* LEVEL_15:0x09D318 -- placement copy of LEVEL_01_0BCCD0.c: when the second argument is all-ones, either resets a three-word record with a unit float and calls one helper, or calls a second helper with a count of two. */

extern unsigned char D_00240260[];
extern unsigned char D_00240270[];

void *func_09D2C8(unsigned char *p);
void func_09D2F0(unsigned char *p, int n);

void func_09D318(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            unsigned int *w;
            float *f;
            unsigned char *p;

            w = (unsigned int *)D_00240260;
            f = (float *)D_00240260;
            f[3] = 1.0f;
            w[0] = 0;
            p = D_00240270;
            w[2] = 0;
            w[1] = 0;
            func_09D2C8(p + 0x34);
        } else {
            unsigned char *p;

            p = D_00240270;
            func_09D2F0(p + 0x34, 2);
        }
    }
}
