/* LEVEL_24:0x197450 -- placement copy of LEVEL_04_1C8828.c: damps the object's three vectors by 0.9, sets the shared record's scale to 0.65 and its callback, resets the linked record (mode 2, owner = the object) and marks the object flags with 0x30. */
struct Rec48 {
    char pad00[8];
    float f08;
    char pad0C[0xD0];
    void (*fDC)();
};

struct Rec58 {
    int w00;
    char pad04[0xA];
    unsigned char b0E;
    char pad0F;
    void *f10;
    int w14;
    int w18;
};

struct Obj {
    float v00[3];
    char pad0C[4];
    float v10[3];
    char pad1C[4];
    float v20[3];
    char pad2C[0x1C];
    struct Rec48 *f48;
    char pad4C[0xC];
    struct Rec58 *f58;
    char pad5C[8];
    unsigned int w64;
};

extern void func_197568();

static __inline__ void Scale3(float *v, float k)
{
    v[0] = v[0] * k;
    v[1] = v[1] * k;
    v[2] = v[2] * k;
}

int func_197450(struct Obj *o)
{
    struct Rec58 *r = o->f58;

    o->f48->f08 = 0.65f;
    Scale3(o->v20, 0.9f);
    Scale3(o->v10, 0.9f);
    Scale3(o->v00, 0.9f);
    r->w18 = 0;
    r->f10 = o;
    r->w14 = 0;
    r->w00 = 0;
    r->b0E = 2;
    o->w64 = o->w64 | 0x30;
    o->f48->fDC = func_197568;
    return 1;
}
