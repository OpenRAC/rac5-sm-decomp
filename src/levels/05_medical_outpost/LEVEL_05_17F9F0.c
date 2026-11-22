/* LEVEL_05:0x17F9F0 -- stores the lengths of the object's two vectors in its output record, converts the linked record's two offsets into pointers (the first must be set, else returns 0), picks a random table entry when the record's selector is -1, remaps the selector through the table, scales the record's timer and clears one output field; returns 1. */
extern float sqrtf(float x);
extern int rand(void);

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    unsigned short h;
    unsigned short pad;
} Pick;

typedef struct {
    char pad00[0x10];
    int w10;
    int w14;
    char pad18[4];
    float f1C;
    char pad20[0xC];
    short h2C;
} Link;

typedef struct {
    float len0;
    float len1;
    int w08;
} Out;

typedef struct {
    char pad00[0x10];
    Vec3 v0;
    char pad1C[4];
    Vec3 v1;
    char pad2C[0x28];
    Link *link;
    Out *out;
} Obj;

extern int D_001F5E14;
extern Pick D_00383610[];

static __inline__ float Length(Vec3 *v)
{
    return sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
}

int func_17F9F0(Obj *o)
{
    Link *lk = o->link;
    Out *out = o->out;
    int ok;
    int a;
    int b;

    out->len0 = Length(&o->v0);
    out->len1 = Length(&o->v1);
    a = lk->w10;
    if (a == 0) {
        ok = 0;
    } else {
        lk->w10 = D_001F5E14 + a;
        ok = 1;
    }
    if (!ok) {
        return 0;
    }
    b = lk->w14;
    if (b != 0) {
        lk->w14 = D_001F5E14 + b;
    }
    if (lk->h2C == -1) {
        lk->h2C = rand() % 3;
    }
    lk->h2C = D_00383610[lk->h2C].h;
    lk->f1C = lk->f1C * 0.033333335f;
    out->w08 = 0;
    return 1;
}
