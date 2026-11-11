/* LEVEL_18:000E78 -- stores the two float arguments at 0x10C and 0x110 of the
   object held by D_0019C14C, reloading it between the two stores. */
typedef struct {
    char pad_10C[0x10C];
    float f_10C;
    float f_110;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_0019C14C;

void func_000E78(float a, float b)
{
    D_0019C14C.p->f_10C = a;
    D_0019C14C.p->f_110 = b;
}
