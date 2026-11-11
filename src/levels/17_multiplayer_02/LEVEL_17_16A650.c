/* LEVEL_17:0x16A650 -- timer callback gated by the sixth argument's id: counts the inner timer down, updates the effect and, when it expires, releases both attached records and finishes the object; returns 0 or 2. */
typedef struct {
    char pad00[0x24];
    unsigned int id;
} Info;

typedef struct {
    char pad00[0x40];
    Info *info;
} Other;

typedef struct {
    char pad00[4];
    void *f04;
    void *f08;
    char pad0C[8];
    float f14;
    char pad18[0x10];
    int f28;
} Inner;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x12];
    Inner *inner;
} Obj;

extern void func_16ACE8(Obj *o);
extern void func_11D3A8(int a0, float a, float b);
extern void func_14F288(void *record);
extern void func_16A948(Obj *o);

int func_16A650(Obj *o, float dt, int a1, int a2, int a3, int a4, Other *other)
{
    Inner *s;

    if (other == 0 || other->info->id != 0x50C45F32u) {
        return 0;
    }
    s = o->inner;
    s->f14 = s->f14 - dt;
    func_16ACE8(o);
    func_11D3A8(s->f28, s->f14, 125.0f);
    if (s->f14 <= 0.0f) {
        if (s->f04 != 0) {
            func_14F288(s->f04);
        }
        if (s->f08 != 0) {
            func_14F288(s->f08);
        }
        func_16A948(o);
        o->state = 1;
    }
    return 2;
}
