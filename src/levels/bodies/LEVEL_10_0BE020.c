/* LEVEL_10:0x0BE020 -- placement copy of LEVEL_01_0BCCD0.c: when the second argument is all-ones, either resets a three-word record with a unit float and calls one helper, or calls a second helper with a count of two. */

extern unsigned char D_00331E20[];
extern unsigned char D_00331E30[];

void *func_0BDFD0(unsigned char *p);
void func_0BDFF8(unsigned char *p, int n);

void func_0BE020(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            unsigned int *w;
            float *f;
            unsigned char *p;

            w = (unsigned int *)D_00331E20;
            f = (float *)D_00331E20;
            f[3] = 1.0f;
            w[0] = 0;
            p = D_00331E30;
            w[2] = 0;
            w[1] = 0;
            func_0BDFD0(p + 0x34);
        } else {
            unsigned char *p;

            p = D_00331E30;
            func_0BDFF8(p + 0x34, 2);
        }
    }
}
