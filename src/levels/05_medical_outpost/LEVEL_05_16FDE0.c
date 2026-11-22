/* LEVEL_05:0x16FDE0 -- placement copy of LEVEL_01_17E468.c: resets an object's scale pair, derives its ratios and fills two bit fields before initialising its parts. */
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

extern int D_00283C80[];
extern void func_16FC00(void *rec, int count, float *scale);
extern void func_179C68(void *p);
extern void func_1C2F00(void *p);
extern void func_1CEDB0(void *p);
extern void func_102280(void *p, int n);

void func_16FDE0(Obj *o)
{
    unsigned int i;
    int v;
    unsigned int bits;

    o->scale0 = 1.0f;
    o->scale1 = 1.0f;
    func_16FC00(o->recs, o->count, &o->scale0);
    o->ratio0 = o->f10 / o->scale0;
    o->ratio1 = o->f14 / o->scale1;
    i = 0;
    for (; i < 2; i++) {
        bits = o->bits[i];
        if (o->idx != -1) {
            v = D_00283C80[o->idx];
        } else {
            v = 0x7FC;
        }
        o->bits[i] = (bits & 0xF800FFFF) | v << 16;
    }
    func_179C68((char *)o + 0xEC);
    func_1C2F00((char *)o + 0x124);
    func_1CEDB0((char *)o + 0x1E0);
    func_102280((char *)o + 0x38, 2);
}
