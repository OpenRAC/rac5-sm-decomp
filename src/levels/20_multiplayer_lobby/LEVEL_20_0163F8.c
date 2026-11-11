/* LEVEL_20:0x0163F8 -- copies the sixteen floats of the argument into the
   global record. */
typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    float f14;
    float f18;
    float f1C;
    float f20;
    float f24;
    float f28;
    float f2C;
    float f30;
    float f34;
    float f38;
    float f3C;
} Rec;

extern Rec D_001361F0;

void func_0163F8(Rec *a0)
{
    D_001361F0.f20 = a0->f20;
    D_001361F0.f24 = a0->f24;
    D_001361F0.f28 = a0->f28;
    D_001361F0.f2C = a0->f2C;
    D_001361F0.f00 = a0->f00;
    D_001361F0.f04 = a0->f04;
    D_001361F0.f08 = a0->f08;
    D_001361F0.f0C = a0->f0C;
    D_001361F0.f10 = a0->f10;
    D_001361F0.f14 = a0->f14;
    D_001361F0.f18 = a0->f18;
    D_001361F0.f1C = a0->f1C;
    D_001361F0.f30 = a0->f30;
    D_001361F0.f34 = a0->f34;
    D_001361F0.f38 = a0->f38;
    D_001361F0.f3C = a0->f3C;
}
