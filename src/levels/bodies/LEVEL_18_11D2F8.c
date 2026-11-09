/* LEVEL_18:0x11D2F8 -- placement copy of LEVEL_16_11E240.c: builds an effect record from a template, runs a callback for each slot until it declines, then flags the record. */

struct Fx_11E240 {
    char pad_00[0xC];
    float f_0C;
    float f_10;
    unsigned int f_14;
    char pad_18[0x30];
    int f_48;
    char pad_4C[0x1310 - 0x4C];
};

extern char D_001BA780[];
extern struct Fx_11E240 D_002E1910;

extern void *memset(void *s, int c, unsigned int n);
extern void func_0A7B60(void *dst, void *src, int n, int a3);
extern void func_09BE08(void *a0, short *out, float f12);
extern void func_0A7EB8(void *fx, short a1, short a2, short a3, short a4);
extern void func_0A7EA0(void *fx, void *a1, void *a2);
extern int func_0A79C0(void *fx, unsigned int a1, unsigned int a2);
extern int func_0A7C38(void *fx);

void func_11D2F8(void *a0, void *a1, void *a2, int (*a3)(int, void *), int t0)
{
    short v[8];
    unsigned int i;
    struct Fx_11E240 *fx;

    memset(D_001BA780, 0, 0x1310);
    func_0A7B60(&D_002E1910, D_001BA780, 0x1310, 0);
    D_002E1910.f_48 = t0;
    func_09BE08(a0, v, 0.0f);
    func_0A7EB8(&D_002E1910, v[0], v[2], v[4], v[6]);
    func_0A7EA0(&D_002E1910, a1, a2);
    func_0A79C0(&D_002E1910, 0x40602020, 0xFFB07050);
    for (i = 0; i < 100; i++) {
        if (a3(i, &D_002E1910) == 0) {
            break;
        }
    }
    fx = &D_002E1910;
    fx->f_14 |= 0x14;
    func_0A7C38(fx);
    fx->f_0C = 0.8999999761581421f;
    fx->f_10 = 0.8999999761581421f;
}
