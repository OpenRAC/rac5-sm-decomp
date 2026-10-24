/* LEVEL_17:003740 -- stores the two incoming samples into the global record. */
typedef struct { char pad0[0x2C0]; float f_a; char pad1[0]; float f_b; } Rec;
typedef struct { Rec *p; } Holder;
extern Holder D_0018E2DC;
void func_003740(float f12, float f13)
{
    D_0018E2DC.p->f_a = f12;
    D_0018E2DC.p->f_b = f13;
}
