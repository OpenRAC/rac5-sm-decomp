/* LEVEL_19:000E08 -- stores the two incoming samples into the global record. */
typedef struct { char pad0[0x10C]; float f_a; char pad1[0]; float f_b; } Rec;
typedef struct { Rec *p; } Holder;
extern Holder D_0019BE4C;
void func_000E08(float f12, float f13)
{
    D_0019BE4C.p->f_a = f12;
    D_0019BE4C.p->f_b = f13;
}
