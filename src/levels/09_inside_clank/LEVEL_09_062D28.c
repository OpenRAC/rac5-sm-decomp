/* LEVEL_09.REL:062D28 -- copies the four floats of the global D_00201A88
   into the block at 0x304 and, when the object at 0x5A4 is of the expected
   type, releases it and clears the field at 0xDC of its record. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Quad;

typedef struct {
    char pad_00[0x24];
    int f_24;
} Mid;

typedef struct {
    char pad_00[0xDC];
    int f_DC;
} Tail;

typedef struct {
    char pad_00[0x40];
    Mid *f_40;
    char pad_44[0x4];
    Tail *f_48;
} Inner;

typedef struct {
    char pad_00[0x304];
    Quad q;
    char pad_314[0x290];
    Inner *f_5A4;
} Obj;

extern Quad D_00201A88;

extern void func_170560(Inner *a0);

void func_067B90(Obj *a0)
{
    Quad *dst = &a0->q;

    dst->f_00 = D_00201A88.f_00;
    dst->f_04 = D_00201A88.f_04;
    dst->f_08 = D_00201A88.f_08;
    dst->f_0C = D_00201A88.f_0C;
    if (a0->f_5A4 != 0) {
        if (a0->f_5A4->f_40->f_24 == 0x4B6F098C) {
            func_170560(a0->f_5A4);
            a0->f_5A4->f_48->f_DC = 0;
        }
    }
}
