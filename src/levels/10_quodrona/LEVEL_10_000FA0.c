/* LEVEL_10.REL:0x000FA0 -- writes two float slots of the
   current record. */
typedef struct {
    char pad[0x10C];
    float f_10C;
    float f_110;
} Obj;

typedef struct { Obj *p; } Holder;

extern Holder D_001F8248;

void func_000FA0(float a, float b)
{
    D_001F8248.p->f_10C = a;
    D_001F8248.p->f_110 = b;
}
