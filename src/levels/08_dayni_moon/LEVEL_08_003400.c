/* LEVEL_08:003400 -- stores the two float arguments at 0x20C and 0x218 of the
   object held by D_00237DD4, reloading it between the two stores. */
typedef struct {
    char pad_20C[0x20C];
    float f_20C;
    char pad_210[8];
    float f_218;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_00237DD4;

void func_003400(float a, float b)
{
    D_00237DD4.p->f_20C = a;
    D_00237DD4.p->f_218 = b;
}
