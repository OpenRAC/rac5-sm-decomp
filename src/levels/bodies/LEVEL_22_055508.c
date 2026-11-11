/* LEVEL_22:0x055508 -- conditional update of a record after a probe call. */

extern char D_00186D40[];
extern char D_0018AB78[];

int func_057DD8(void);
void func_0573D0(void *a0, int a1, int a2);
void func_0D5840(void *a0, void *a1);
void func_06F718(void *a0, int a1, int a2, int a3, float f12, float f13);

void func_055508(void *a0)
{
    unsigned char *s0 = (unsigned char *)D_00186D40;
    char *g;
    float k;

    if (func_057DD8() != 0) {
        func_0573D0(s0, s0[0x108], 5);
        func_0D5840(0, s0 + 0x30);
        func_06F718(*(void **)(s0 + 0x59C), 0x3D, 0, 1, 0.125f, 0.0f);
        g = D_0018AB78;
        k = 160.00318908691406f;
        *(float *)(g + 0x160) = k;
        *(float *)(g + 0x15C) = k;
        g[0x1B6] = 3;
    }
}
