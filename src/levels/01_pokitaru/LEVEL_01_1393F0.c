/* LEVEL_01:0x1393F0 -- initializes an object: sets its timer and flag bits, installs a handler in its linked block, clears the object's record (a four-word group, scalars, flag bytes and a vector), starts the shared follow-up on the embedded part and returns 1. */
typedef struct {
    int x;
    int y;
    int z;
} Vec3;

typedef struct {
    char pad00[0xDC];
    void *handler;
} Hold;

typedef struct {
    char pad00[0x2C];
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
} Sub;

typedef struct {
    int f00;
    char pad04[0xA];
    unsigned char b0E;
    char pad0F;
    void *owner;
    int f14;
    unsigned char b18;
    char pad19[0x47];
    Vec3 vec;
    int f6C;
    int f70;
    int f74;
    char pad78[0x74];
    unsigned char bEC;
    char padED[2];
    unsigned char bEF;
    char padF0;
    unsigned char bF1;
    unsigned char bF2;
    unsigned char bF3;
    char padF4;
    unsigned char bF5;
    unsigned char bF6;
} Rec;

typedef struct {
    char pad00[0x48];
    Hold *hold;
    char pad4C[0xC];
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
    char pad68[8];
    float timer;
    char part[0x20];
} Obj;

extern void func_13C088(void);
extern void func_023838(char *part, int a1, int a2, int a3);

static __inline__ void Zero3(Vec3 *v)
{
    v->x = 0;
    v->y = 0;
    v->z = 0;
}

int func_1393F0(Obj *o)
{
    Rec *rec;
    Sub *sub;

    o->timer = 900.0f;
    o->flags = o->flags | 0x1400;
    o->hold->handler = func_13C088;
    o->flags = o->flags | 0x4000;
    rec = o->rec;
    sub = (Sub *)((char *)rec + 0x1C);
    rec->b0E = 2;
    rec->owner = o;
    rec->f74 = 0;
    rec->f14 = 0;
    rec->f00 = 0;
    sub->f34 = 0;
    sub->f38 = 0;
    sub->f3C = 0;
    sub->f2C = 0;
    sub->f30 = 0;
    rec->bF5 = 0x3C;
    rec->f6C = 0;
    rec->f70 = 0;
    rec->bEC = 0;
    rec->bF1 = 0;
    rec->bF2 = 0;
    rec->bF3 = 0;
    rec->bF6 = 0;
    rec->bEF = 0;
    Zero3(&rec->vec);
    func_023838(o->part, 5, -1, -1);
    rec->b18 = 0;
    return 1;
}
