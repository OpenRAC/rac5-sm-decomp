/* LEVEL_18:0x04FE88 -- placement copy of LEVEL_16_051380.c. */
/* LEVEL_16:0x51380 -- resets a two-step blend record and accumulates a sampled pair into it. */

extern int func_014128(void *a, void *b, char *c, int *d, float *e, int f, int g);
extern float func_04E688(void *a, int b, float c);

void func_04FE88(char *a0, void *a1)
{
    unsigned char buf[16];
    int i;
    float f;
    float add;
    int *q;

    *(int *)(a0 + 0xCC4) = 8;
    *(float *)(a0 + 0xCB8) = 0.13333334028720856f;
    *(float *)(a0 + 0xCBC) = 0.02222222462296486f;
    *(int *)(a0 + 0xCD4) = 0;
    q = (int *)(a0 + 0xC98);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    f = *(float *)(a0 + 0xC8C);
    i = *(int *)(a0 + 0xC88);
    if (func_014128(buf, a1, a0 + 0x30, &i, &f, 0, 0) != 0) {
        add = func_04E688(a1, i, 0.0f);
        *(float *)(a0 + 0xC8C) = f;
        *(int *)(a0 + 0xC88) = i;
        *(float *)(a0 + 0xC90) = add;
        *(float *)(a0 + 0xC94) = add + f;
    }
}
