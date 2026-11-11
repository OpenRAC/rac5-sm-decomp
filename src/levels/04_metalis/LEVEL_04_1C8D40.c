/* LEVEL_04:0x1C8D40 -- initialises the object's state record, builds the turn matrix when its source record is flagged, and marks the object with the 0x30 bits. */
typedef struct {
    float f_00;
    int i_04;
    float f_08;
    int i_0C;
    float f_10;
    int i_14;
    float f_18;
    int i_1C;
    float f_20;
} Rot;

struct Obj;

struct Rec {
    int f0;
    char pad4[0xA];
    unsigned char b0E;
    char pad0F;
    struct Obj *f10;
    int f14;
};

struct Src {
    unsigned char b0;
};

struct Obj {
    char pad0[0x54];
    struct Src *f54;
    struct Rec *f58;
    char pad5C[8];
    unsigned int f64;
};

extern void func_12FF28(Rot *a0, float a1);
extern void func_131BD0(float *o, float *a, float *b);

int func_1C8D40(struct Obj *o)
{
    Rot r;
    struct Rec *rec = o->f58;
    struct Src *src = o->f54;

    rec->b0E = 2;
    rec->f10 = o;
    rec->f14 = 0;
    rec->f0 = 0;
    if (src->b0 != 0) {
        func_12FF28(&r, 3.1415927f);
        func_131BD0((float *)o, (float *)o, (float *)&r);
    }
    o->f64 |= 0x30;
    return 1;
}
