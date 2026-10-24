/* LEVEL_04.REL:0x003988 -- records the caller's two readings on the current
   record. */
typedef struct {
    char pad0[0x164];
    float f_164;
    float f_168;
} Rec;

typedef struct {
    Rec *p;
} Holder;

extern Holder D_002083D4;

void func_003988(float a, float b)
{
    D_002083D4.p->f_164 = a;
    D_002083D4.p->f_168 = b;
}
