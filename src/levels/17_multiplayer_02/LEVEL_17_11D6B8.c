/* LEVEL_17:0x11D6B8 -- placement copy of LEVEL_16_11DC90.c: plays the pickup effects and spawns up to four icons for the given ids. */
typedef struct Buf {
    short f0;
    char pad2[0xA];
    unsigned short fC;
    char pad4[2];
} Buf;

extern int D_001C3498[4];
extern int D_002D2778;

extern void func_09CFE8(int a, int b, int c, int d, float f, float g, unsigned e, float h, float i);
extern void func_096858(unsigned a);
extern void func_09C2F0(int a, Buf *b, float f);
extern int func_096208(Buf *b);
extern void func_098378(short a, short b, int *c);
extern void func_097740(short a, short b, int c, float f, float g);
extern int func_10E8A8(int a);

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
                *p = func_10E8A8(id);
            }
        } else {
            *p = 0;
        }
        p++;
    } while (i >= 0);
}

void func_11D6B8(int *obj, int *ids, int unused, int *alt)
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
        func_09CFE8(0x34E, 0, 0, 0, 1.0f, 1.0f, 0xFFFFFFFF, 0.0f, 0.0f);
    }
    func_096858(0xFFFFFFFF);
    func_09C2F0(0xC5, &buf, 0.0f);
    if (obj) {
        func_098378(func_096208(&buf), buf.fC, obj);
    }
    func_09CFE8(0x341, 0, 0, 0, 1.0f, 1.0f, 0xFFFFFFFF, 0.0f, 0.0f);
    src = ids;
    if (alt) {
        D_002D2778++;
        if (D_002D2778 & 0x80) {
            src = alt;
        }
    }
    base = out;
    Resolve(base, src);
    j = 3;
    tbl = D_001C3498;
    p = base;
    do {
        id = *p;
        j--;
        if (id) {
            func_09C2F0(*tbl, &buf, 0.0f);
            func_097740(buf.f0, buf.fC, *p, 0.75f, 0.75f);
        }
        tbl++;
        p++;
    } while (j >= 0);
}
