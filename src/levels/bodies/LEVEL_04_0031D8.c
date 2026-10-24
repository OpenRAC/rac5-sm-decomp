/* LEVEL_04:0031D8 -- stores the two incoming samples into the global record. */
typedef struct { char pad0[0x20C]; float f_a; char pad1[8]; float f_b; } Rec;
typedef struct { Rec *p; } Holder;
extern Holder D_002083D4;
void func_0031D8(float f12, float f13)
{
    D_002083D4.p->f_a = f12;
    D_002083D4.p->f_b = f13;
}
