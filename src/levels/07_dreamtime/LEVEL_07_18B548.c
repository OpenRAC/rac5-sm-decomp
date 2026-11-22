/* LEVEL_07:0x18B548 -- placement copy of LEVEL_01_17E468.c: resets an object's scale pair, derives its ratios and fills two bit fields before initialising its parts. */
typedef struct {
    char pad00[8];
    void *recs;
    int count;
    float f10;
    float f14;
    char pad18[4];
    float ratio0;
    float ratio1;
    float scale0;
    float scale1;
    unsigned int bits[2];
    int idx;
} Obj;

extern int D_002AD6C0[];
extern void func_18B368(void *rec, int count, float *scale);
extern void func_1953D0(void *p);
extern void func_1E22C0(void *p);
extern void func_1EE170(void *p);
extern void func_1065C0(void *p, int n);

void func_18B548(Obj *o)
{
    unsigned int i;
    int v;
    unsigned int bits;

    o->scale0 = 1.0f;
    o->scale1 = 1.0f;
    func_18B368(o->recs, o->count, &o->scale0);
    o->ratio0 = o->f10 / o->scale0;
    o->ratio1 = o->f14 / o->scale1;
    i = 0;
    for (; i < 2; i++) {
        bits = o->bits[i];
        if (o->idx != -1) {
            v = D_002AD6C0[o->idx];
        } else {
            v = 0x7FC;
        }
        o->bits[i] = (bits & 0xF800FFFF) | v << 16;
    }
    func_1953D0((char *)o + 0xEC);
    func_1E22C0((char *)o + 0x124);
    func_1EE170((char *)o + 0x1E0);
    func_1065C0((char *)o + 0x38, 2);
}
