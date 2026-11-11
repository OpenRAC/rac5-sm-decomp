/* LEVEL_23.REL:0x001210 -- records the caller's two readings on the current
   record. */
typedef struct {
    char pad0[0x10C];
    float f_10C;
    float f_110;
} Rec;

typedef struct {
    Rec *p;
} Holder;

extern Holder D_001C2648;

void func_001210(float a, float b)
{
    D_001C2648.p->f_10C = a;
    D_001C2648.p->f_110 = b;
}
