/* LEVEL_09.REL:0x0033D0 -- writes two float slots of the
   current record. */
typedef struct {
    char pad[0x20C];
    float f_20C;
    char pad1[0x8];
    float f_218;
} Obj;

typedef struct { Obj *p; } Holder;

extern Holder D_001D9054;

void func_0033D0(float a, float b)
{
    D_001D9054.p->f_20C = a;
    D_001D9054.p->f_218 = b;
}
