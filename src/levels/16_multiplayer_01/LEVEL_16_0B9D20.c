/* LEVEL_16:0x0B9D20 -- per-frame update of the current menu slot record. */
typedef struct {
    int w0; char pad4[0x10]; int w14; char pad18[0x10]; unsigned char b28; char pad29[0x13];
    unsigned char b3C; char pad3D[3]; unsigned w40[5]; int w54; int w58; unsigned char b5C;
    char pad5D[3]; int w60; unsigned char b64; unsigned char b65; char pad66[2]; char *p68;
} Slot;
extern int D_001AF10C;
extern Slot D_001AF3C0[];
extern char D_001AF280[];
extern unsigned char D_001AF4A0[];
extern void *func_018B70(int *out);
extern void func_0B9858(int x, int y);
extern void func_095168(int a, int b, int c, int d, int e, int f);
extern void func_0B9490(void);
extern void func_0B96E0(void);

void func_0B9D20(int x, int y)
{
    int loc[4];
    Slot *e;
    int a2;
    int t;
    int i;
    int v;
    unsigned lim;
    unsigned top;

    e = &D_001AF3C0[D_001AF10C];
    if (e->w0 == 8) return;
    if (e->w58 == -1) return;
    if (e->b28) {
        e->b28 = e->b28 - 1;
        y = 0;
        x = 0;
    }
    func_018B70(loc);
    if (loc[0] != 6) {
        a2 = 0;
        t = e->w54 > 0 ? e->w54 - 1 : 0;
        e->w54 = t;
        if (t != 0) a2 = e->w58;
        e->w58 = a2;
        e->p68 = D_001AF280 + D_001AF10C * 0xA0 + a2 * 0x28;
    }
    if (e->p68 == 0) return;
    func_0B9858(x, y);
    if (D_001AF4A0[D_001AF10C]) {
        func_095168(D_001AF10C + 1, 0xA0000000, 0x20, 0x20, 3, 0);
    }
    func_0B9490();
    func_0B96E0();
    if (e->w0 == 4) return;
    if (e->b3C) {
        e->b3C = e->b3C - 1;
    } else if (e->b5C) {
        e->b65 = e->b65 - 1;
        if ((signed char)e->b65 <= 0) {
            e->b65 = 2;
            v = e->b64 + 1;
            e->b64 = v;
            lim = 5;
            if ((unsigned char)v > lim) e->b64 = lim;
        }
        for (i = 0; i < e->b64; i++) {
            top = 0xFF;
            e->w40[i] += 0xAA;
            if (e->w40[i] > top) e->w40[i] = top;
        }
    }
    if (e->w58 == 2) {
        e->w60 = e->w60 + 1;
        if (e->w60 >= 0x3D) {
            e->w60 = 0;
            e->w14 = -1;
        }
    }
}
