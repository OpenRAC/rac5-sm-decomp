/* LEVEL_18:0x11CD48 -- placement copy of LEVEL_16_11DC90.c: plays the pickup effects and spawns up to four icons for the given ids. */
typedef struct Buf {
    short f0;
    char pad2[0xA];
    unsigned short fC;
    char pad4[2];
} Buf;

extern int D_001D1598[4];
extern int D_002E17F8;

extern void func_09CB00(int a, int b, int c, int d, float f, float g, unsigned e, float h, float i);
extern void func_096370(unsigned a);
extern void func_09BE08(int a, Buf *b, float f);
extern int func_095D20(Buf *b);
extern void func_097E90(short a, short b, int *c);
extern void func_097258(short a, short b, int c, float f, float g);
extern int func_10DFE0(int a);

static __inline__ void Resolve(int *dst, int *src)
{
    int *p;
    int *q;
    int i;
    int id;
    int neg;

    neg = -1;
    p = dst;
    q = src;
    i = 3;
    do {
        id = *q++;
        i--;
        if (id != neg) {
            if ((unsigned)id >= 0x2711) {
                *p = id;
            } else {
                *p = func_10DFE0(id);
            }
        } else {
            *p = 0;
        }
        p++;
    } while (i >= 0);
}

void func_11CD48(int *obj, int *ids, int unused, int *alt)
{
    Buf buf;
    int out[4];
    int *base;
    int *src;
    int *p;
    int *tbl;
    int j;
    int id;

    if (obj) {
        func_09CB00(0x34E, 0, 0, 0, 1.0f, 1.0f, 0xFFFFFFFF, 0.0f, 0.0f);
    }
    func_096370(0xFFFFFFFF);
    func_09BE08(0xC5, &buf, 0.0f);
    if (obj) {
        func_097E90(func_095D20(&buf), buf.fC, obj);
    }
    func_09CB00(0x341, 0, 0, 0, 1.0f, 1.0f, 0xFFFFFFFF, 0.0f, 0.0f);
    src = ids;
    if (alt) {
        D_002E17F8++;
        if (D_002E17F8 & 0x80) {
            src = alt;
        }
    }
    base = out;
    Resolve(base, src);
    j = 3;
    tbl = D_001D1598;
    p = base;
    do {
        id = *p;
        j--;
        if (id) {
            func_09BE08(*tbl, &buf, 0.0f);
            func_097258(buf.f0, buf.fC, *p, 0.75f, 0.75f);
        }
        tbl++;
        p++;
    } while (j >= 0);
}
