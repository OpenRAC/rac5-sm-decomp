/* LEVEL_06:0x187558 -- runs a per-state step callback and either advances the object position or tears the step down. */

typedef struct Ent_187558 {
    int (*f_00)(void *o, float *out);
    void (*f_04)(void *o);
    int pad_08;
    int pad_0C;
} Ent_187558;

extern Ent_187558 D_002122F8[];

extern void func_076268(void *p, int a1);
extern void func_187AE0(void *o, int a1);
extern void func_1860B0(void *o, int a1);
extern void func_02ED10(void *o, float *p, int a2);

int func_187558(char *a0)
{
    float m[4];
    float n[4];
    char *s2;
    char *s0;
    char *s1;
    Ent_187558 *e;
    int r;

    s2 = *(char **)(a0 + 0x58);
    s0 = *(char **)(a0 + 0x54);
    s1 = *(char **)(s0 + 0x44);
    e = &D_002122F8[((signed char *)s2)[0xD9]];
    r = e->f_00(s1, m);
    *(int *)(s2 + 0xA8) = r;
    if (r == 0 || (*(int *)(s1 + 0x64) & 7) != 1) {
        *(int *)(*(char **)(s0 + 0x44) + 0x64) &= ~0x400;
        if (*(int *)(s2 + 0xAC) != 0) {
            func_076268(*(void **)(s2 + 0xAC), 1);
        }
        e->f_04(*(void **)(s0 + 0x44));
        *(int *)(s0 + 0x44) = 0;
        func_187AE0(a0, 1);
        func_1860B0(a0, 9);
        return 0;
    }
    *(float *)s0 = *(float *)(s1 + 0x30) + m[0] * 3.0f;
    *(float *)(s0 + 4) = *(float *)(s1 + 0x38) + m[1] * 3.0f;
    n[0] = *(float *)s0;
    n[2] = *(float *)(s0 + 4);
    n[1] = 0;
    func_02ED10(s0, n, 1);
    return 1;
}
