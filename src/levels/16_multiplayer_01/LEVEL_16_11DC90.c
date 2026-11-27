/* LEVEL_16:0x11DC90 -- plays the pickup effects and spawns up to four icons for the given ids. */
typedef struct Buf {
    short f0;
    char pad2[0xA];
    unsigned short fC;
    char pad4[2];
} Buf;

extern int D_001D0018[4];
extern int D_002E1478;

extern void func_09DAF0(int a, int b, int c, int d, float f, float g, unsigned e, float h, float i);
extern void func_097360(unsigned a);
extern void func_09CDF8(int a, Buf *b, float f);
extern int func_096D10(Buf *b);
extern void func_098E80(short a, short b, int *c);
extern void func_098248(short a, short b, int c, float f, float g);
extern int func_10F330(int a);

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
                *p = func_10F330(id);
            }
        } else {
            *p = 0;
        }
        p++;
    } while (i >= 0);
}

void func_11DC90(int *obj, int *ids, int unused, int *alt)
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
        func_09DAF0(0x34E, 0, 0, 0, 1.0f, 1.0f, 0xFFFFFFFF, 0.0f, 0.0f);
    }
    func_097360(0xFFFFFFFF);
    func_09CDF8(0xC5, &buf, 0.0f);
    if (obj) {
        func_098E80(func_096D10(&buf), buf.fC, obj);
    }
    func_09DAF0(0x341, 0, 0, 0, 1.0f, 1.0f, 0xFFFFFFFF, 0.0f, 0.0f);
    src = ids;
    if (alt) {
        D_002E1478++;
        if (D_002E1478 & 0x80) {
            src = alt;
        }
    }
    base = out;
    Resolve(base, src);
    j = 3;
    tbl = D_001D0018;
    p = base;
    do {
        id = *p;
        j--;
        if (id) {
            func_09CDF8(*tbl, &buf, 0.0f);
            func_098248(buf.f0, buf.fC, *p, 0.75f, 0.75f);
        }
        tbl++;
        p++;
    } while (j >= 0);
}
