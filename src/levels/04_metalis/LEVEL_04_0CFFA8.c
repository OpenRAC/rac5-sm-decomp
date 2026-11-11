/* LEVEL_04:0x0CFFA8 -- placement copy of LEVEL_01_0CA790.c: per-frame update of one slot record: timers, state pointer and fade levels. */
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

extern int D_0021A724;
extern Rec D_0021A9D8[];
extern char D_0021A898[];
extern unsigned char D_0021AAB0[];

extern void *func_01A480(Snap *s);
extern void func_0CFB48(int a, int b);
extern void func_0AB210(int a, int b, int c, int d, int e, int f);
extern void func_0CF890(void);
extern void func_0CFA48(void);

void func_0CFFA8(int a, int b)
{
    Rec *r;
    Snap s;
    int t;
    int i;

    r = &D_0021A9D8[D_0021A724];
    if (r->w0 == 8)
        return;
    if (r->w58 == -1)
        return;
    if (r->b28) {
        r->b28--;
        b = 0;
        a = 0;
    }
    func_01A480(&s);
    if (s.w0 != 6) {
        t = 0;
        r->w54 = r->w54 < 1 ? 0 : r->w54 - 1;
        if (r->w54)
            t = r->w58;
        r->w58 = t;
        r->w68 = D_0021A898 + D_0021A724 * 0xA0 + t * 0x28;
    }
    if (!r->w68)
        return;
    func_0CFB48(a, b);
    if (D_0021AAB0[D_0021A724])
        func_0AB210(D_0021A724 + 1, 0xE0000000, 0x20, 0x20, 3, 0);
    func_0CF890();
    func_0CFA48();
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
