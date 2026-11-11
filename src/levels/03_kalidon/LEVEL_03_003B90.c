/* LEVEL_03:0x003B90 -- stores two floats in the current object. */
typedef struct {
    char pad[0x164];
    float f_164;
    float f_168;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_002078D4;

void func_003B90(float a, float b)
{
    D_002078D4.p->f_164 = a;
    D_002078D4.p->f_168 = b;
}
