/* LEVEL_20:0x0F0340 -- placement copy of LEVEL_16_11E240.c: builds an effect record from a template, runs a callback for each slot until it declines, then flags the record. */

struct Fx_11E240 {
    char pad_00[0xC];
    float f_0C;
    float f_10;
    unsigned int f_14;
    char pad_18[0x30];
    int f_48;
    char pad_4C[0x1310 - 0x4C];
};

extern char D_0011B9A0[];
extern struct Fx_11E240 D_00204AE8;

extern void *memset(void *s, int c, unsigned int n);
extern void func_0930B8(void *dst, void *src, int n, int a3);
extern void func_0874F0(void *a0, short *out, float f12);
extern void func_093410(void *fx, short a1, short a2, short a3, short a4);
extern void func_0933F8(void *fx, void *a1, void *a2);
extern int func_092F18(void *fx, unsigned int a1, unsigned int a2);
extern int func_093190(void *fx);

void func_0F0340(void *a0, void *a1, void *a2, int (*a3)(int, void *), int t0)
{
    short v[8];
    unsigned int i;
    struct Fx_11E240 *fx;

    memset(D_0011B9A0, 0, 0x1310);
    func_0930B8(&D_00204AE8, D_0011B9A0, 0x1310, 0);
    D_00204AE8.f_48 = t0;
    func_0874F0(a0, v, 0.0f);
    func_093410(&D_00204AE8, v[0], v[2], v[4], v[6]);
    func_0933F8(&D_00204AE8, a1, a2);
    func_092F18(&D_00204AE8, 0x40602020, 0xFFB07050);
    for (i = 0; i < 100; i++) {
        if (a3(i, &D_00204AE8) == 0) {
            break;
        }
    }
    fx = &D_00204AE8;
    fx->f_14 |= 0x14;
    func_093190(fx);
    fx->f_0C = 0.8999999761581421f;
    fx->f_10 = 0.8999999761581421f;
}
