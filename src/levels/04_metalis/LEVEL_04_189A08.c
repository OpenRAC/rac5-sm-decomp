/* LEVEL_04:0x189A08 -- placement copy of LEVEL_01_17E468.c: resets an object's scale pair, derives its ratios and fills two bit fields before initialising its parts. */
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

extern int D_002B25C0[];
extern void func_189828(void *rec, int count, float *scale);
extern void func_193890(void *p);
extern void func_1EAAF0(void *p);
extern void func_1F7B58(void *p);
extern void func_110CD8(void *p, int n);

void func_189A08(Obj *o)
{
    unsigned int i;
    int v;
    unsigned int bits;

    o->scale0 = 1.0f;
    o->scale1 = 1.0f;
    func_189828(o->recs, o->count, &o->scale0);
    o->ratio0 = o->f10 / o->scale0;
    o->ratio1 = o->f14 / o->scale1;
    i = 0;
    for (; i < 2; i++) {
        bits = o->bits[i];
        if (o->idx != -1) {
            v = D_002B25C0[o->idx];
        } else {
            v = 0x7FC;
        }
        o->bits[i] = (bits & 0xF800FFFF) | v << 16;
    }
    func_193890((char *)o + 0xEC);
    func_1EAAF0((char *)o + 0x124);
    func_1F7B58((char *)o + 0x1E0);
    func_110CD8((char *)o + 0x38, 2);
}
