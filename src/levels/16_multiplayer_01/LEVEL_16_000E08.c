/* LEVEL_16:000E08 -- stores the two float arguments at 0x10C and 0x110 of the
   object held by D_0019ACCC, reloading it between the two stores. */
typedef struct {
    char pad_10C[0x10C];
    float f_10C;
    float f_110;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_0019ACCC;

void func_000E08(float a, float b)
{
    D_0019ACCC.p->f_10C = a;
    D_0019ACCC.p->f_110 = b;
}
