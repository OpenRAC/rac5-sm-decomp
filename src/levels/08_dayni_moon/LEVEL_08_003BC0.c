/* LEVEL_08:003BC0 -- stores the two incoming samples into the global record. */
typedef struct { char pad0[0x164]; float f_a; char pad1[0]; float f_b; } Rec;
typedef struct { Rec *p; } Holder;
extern Holder D_00237DD4;
void func_003BC0(float f12, float f13)
{
    D_00237DD4.p->f_a = f12;
    D_00237DD4.p->f_b = f13;
}
