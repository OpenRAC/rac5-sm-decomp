/* LEVEL_01:0x0CA790 -- per-frame update of one slot record: timers, state pointer and fade levels. */
typedef struct Rec {
    int w0;
    char pad4[0x10];
    int w14;
    char pad18[0x10];
    unsigned char b28;
    char pad29[0x13];
    unsigned char b3C;
    char pad3D[3];
    unsigned int lv[4];
    unsigned int lv4;
    int w54;
    int w58;
    unsigned char b5C;
    char pad5D[3];
    int w60;
    unsigned char b64;
    unsigned char b65;
    char pad66[2];
    void *w68;
} Rec;
typedef struct Snap { int w0; int w4; int w8; int wC; } Snap;

extern int D_00201264;
extern Rec D_00201518[];
extern char D_002013D8[];
extern unsigned char D_002015F0[];

extern void *func_01A800(Snap *s);
extern void func_0CA330(int a, int b);
extern void func_0A6000(int a, int b, int c, int d, int e, int f);
extern void func_0CA078(void);
extern void func_0CA230(void);

void func_0CA790(int a, int b)
{
    Rec *r;
    Snap s;
    int t;
    int i;

    r = &D_00201518[D_00201264];
    if (r->w0 == 8)
        return;
    if (r->w58 == -1)
        return;
    if (r->b28) {
        r->b28--;
        b = 0;
        a = 0;
    }
    func_01A800(&s);
    if (s.w0 != 6) {
        t = 0;
        r->w54 = r->w54 < 1 ? 0 : r->w54 - 1;
        if (r->w54)
            t = r->w58;
        r->w58 = t;
        r->w68 = D_002013D8 + D_00201264 * 0xA0 + t * 0x28;
    }
    if (!r->w68)
        return;
    func_0CA330(a, b);
    if (D_002015F0[D_00201264])
        func_0A6000(D_00201264 + 1, 0xE0000000, 0x20, 0x20, 3, 0);
    func_0CA078();
    func_0CA230();
    if (r->w0 == 4)
        return;
    if (r->b3C) {
        r->b3C--;
    } else if (r->b5C) {
        r->b65--;
        if ((signed char)r->b65 <= 0) {
            unsigned int cap = 5;
            r->b65 = 2;
            r->b64++;
            if (r->b64 > cap)
                r->b64 = cap;
        }
        for (i = 0; i < r->b64; i++) {
            unsigned int top = 0xFF;
            r->lv[i] += 0xAA;
            if (r->lv[i] > top)
                r->lv[i] = top;
        }
    }
    if (r->w58 == 2) {
        r->w60++;
        if (r->w60 >= 0x3D) {
            r->w60 = 0;
            r->w14 = -1;
        }
    }
}
