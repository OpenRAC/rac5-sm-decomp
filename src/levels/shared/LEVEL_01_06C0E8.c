/* LEVEL_01.REL:0x06C0E8 -- fills the caller's presentation record from the
   object: three floats, the three floats of its +0x1BC slot (through local
   pointers, as the retail walks them), the difference of the second and the
   +0x10, the frame count and the two limits. */
typedef struct {
    float f00;
    float f04;
    float f08;
} Vec;

typedef struct {
    char pad0[0x1BC];
    float f1BC;
    float f1C0;
    float f1C4;
    char pad1[0x1FC - 0x1C8];
    float f1FC;
} Obj;

typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    float f14;
    short f18;
    short f1A;
    float f1C;
    float f20;
} Rec;

void func_06C0E8(Obj *a0, Rec *a1, Vec *a2)
{
    float *d = &a1->f0C;
    float *s = &a0->f1BC;

    a1->f00 = a2->f00;
    a1->f04 = a2->f04;
    a1->f08 = a2->f08;
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    a1->f04 = a1->f04 - a1->f10;
    a1->f18 = (short)a0->f1FC;
    a1->f20 = 0.04f;
    a1->f1C = 1.0f;
}
