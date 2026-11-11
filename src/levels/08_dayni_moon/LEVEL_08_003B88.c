/* LEVEL_08.REL:0x003B88 -- records the caller's two readings on the current
   record. */
typedef struct {
    char pad0[0x2B4];
    float f_2B4;
    float f_2B8;
} Rec;

typedef struct {
    Rec *p;
} Holder;

extern Holder D_00237DD4;

void func_003B88(float a, float b)
{
    D_00237DD4.p->f_2B4 = a;
    D_00237DD4.p->f_2B8 = b;
}
