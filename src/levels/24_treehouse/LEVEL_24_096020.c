/* LEVEL_24:0x096020 -- placement copy of LEVEL_04_0A0978.c: queues a packed particle record from a pool and registers its update callback. */
typedef struct B12 { float x; float y; float z; } B12;
typedef struct Rec {
    B12 pos;
    unsigned flags;
    float f10;
    float f14;
    int f18;
    int f1C;
    int packA;
    int packB;
} Rec;

extern int D_001C70F4;
extern unsigned D_00268500[];
extern Rec *D_00268508[];

extern void func_0922A8(int *x, int *y, unsigned f);
extern int func_1BBF50(float f);
extern void func_092430(void *cb, Rec *r, unsigned flags, int idx);
extern void func_095900(void);

void func_096020(B12 *pos, unsigned flags, int a, int b, float p0, float p1, float s0, float s1, float s2, float s3)
{
    unsigned i;
    int bit;
    int x;
    int y;
    int lo2;
    int lo;
    Rec *r;
    Rec *p;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if (!(D_001C70F4 & bit)) continue;
        if (D_00268500[i] < 0x28) {
            r = 0;
        } else {
            D_00268500[i] -= 0x28;
            p = D_00268508[i];
            D_00268508[i] = p + 1;
            r = p;
        }
        if (r == 0) return;
        flags = (flags & 0xFFFFFFC3) | 4;
        flags &= 0xFFFFFFFC;
        func_0922A8(&x, &y, (flags >> 16) & 0x7FF);
        lo = func_1BBF50(s0 * (float)x) | (func_1BBF50(s2 * (float)y) << 16);
        lo2 = func_1BBF50(s1 * (float)x) | (func_1BBF50(s3 * (float)y) << 16);
        r->pos = *pos;
        r->flags = flags;
        r->f10 = p0;
        r->f14 = p1;
        r->f18 = a;
        r->f1C = b;
        r->packA = lo;
        r->packB = lo2;
        func_092430(func_095900, r, flags, i);
    }
}
