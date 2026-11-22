/* USA LEVEL_01.REL:0x1D10D0, 340-byte candidate (21 November 2026).
 * Measured pinned -mno-check-zero-division: 4 differing words; first
 * difference at 0x74.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Obj1D10D0 {
    char pad00[0x3C];
    float v3C[3];
    float v48[3];
    float v54[3];
    int w60;
    int w64;
};

struct Src1D10D0 {
    char pad00[0x20];
    float v20[3];
};

extern int rand(void);
extern void func_1D1080(struct Obj1D10D0 *o, struct Src1D10D0 *src);
extern void func_06DED8(struct Obj1D10D0 *o, int a1, float *a, float *b, float *c);

static __inline__ int RandIdx(int n)
{
    return n ? rand() % n : 0;
}

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Neg3(float *dst, float *src)
{
    dst[0] = -src[0];
    dst[1] = -src[1];
    dst[2] = -src[2];
}

void func_1D10D0(struct Obj1D10D0 *o, int a1, struct Src1D10D0 *src, int *tab, int n)
{
    o->w60 = tab[RandIdx(n)];
    do {
        o->w64 = tab[RandIdx(n)];
    } while (o->w64 == o->w60);
    func_1D1080(o, src);
    if (rand() >> 30) {
        Copy3(o->v54, src->v20);
    } else {
        Neg3(o->v54, src->v20);
    }
    func_06DED8(o, a1, o->v3C, o->v48, o->v54);
}
