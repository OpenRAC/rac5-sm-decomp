/* LEVEL_15:0x042A98 -- placement copy of LEVEL_01_051808.c. */
/* LEVEL_01:0x51808 -- resets a 0x22-step timer record, zeroes its counters and refreshes two stage floats. */

extern char D_00180E78[];
extern void func_0619E8(void *a, int b, int c, int d, float e, float f);
extern void func_01E018(char *a, int b);
extern void func_044408(char *a);

void func_042A98(char *a0)
{
    char *s0 = D_00180E78;
    char *s2;
    float t;

    s2 = *(char **)(*(char **)(s0 + 0x2C) + 0x54);
    *(unsigned short *)(a0 + 0x108) = 1;
    *(int *)(a0 + 0x36C) = 0x22;
    func_0619E8(*(void **)(a0 + 0x59C), 0x22, 0, 1, 0.4f, 0.0f);
    *(float *)(s0 + 0x14) = 0.0f;
    *(float *)(s0 + 0x18) = 0.0f;
    *(float *)(s0 + 0x1C) = 0.0f;
    *(int *)(s0 + 0x10) = 0;
    t = *(float *)(s2 + 0x20);
    *(float *)(s0 + 0x34) = t;
    *(float *)(s0 + 0x28) = 0.0f;
    *(float *)(s0 + 0x24) = 0.0f;
    *(float *)(s0 + 0x20) = 0.0f;
    *(float *)(a0 + 0x228) = 0.0f;
    *(float *)(a0 + 0x224) = 0.0f;
    *(float *)(a0 + 0x220) = 0.0f;
    func_01E018(a0, 1);
    func_044408(a0);
}
