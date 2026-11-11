/* LEVEL_23:0x059038 -- placement copy of LEVEL_22_055508.c: conditional update of a record after a probe call. */

extern char D_002025C0[];
extern char D_002063F8[];

int func_05B988(void);
void func_05AF80(void *a0, int a1, int a2);
void func_0E2818(void *a0, void *a1);
void func_074128(void *a0, int a1, int a2, int a3, float f12, float f13);

void func_059038(void)
{
    unsigned char *s0 = (unsigned char *)D_002025C0;
    char *g;
    float k;

    if (func_05B988() != 0) {
        func_05AF80(s0, s0[0x108], 5);
        func_0E2818(0, s0 + 0x30);
        func_074128(*(void **)(s0 + 0x59C), 0x3D, 0, 1, 0.125f, 0.0f);
        g = D_002063F8;
        k = 160.00318908691406f;
        *(float *)(g + 0x160) = k;
        *(float *)(g + 0x15C) = k;
        g[0x1B6] = 3;
    }
}
