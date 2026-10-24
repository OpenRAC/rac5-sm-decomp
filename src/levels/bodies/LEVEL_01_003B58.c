typedef struct {
    char pad[0x164];
    float f164;
    char pad2[0];
    float f168;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_001EF254;

void func_003B58(float a, float b)
{
    D_001EF254.p->f164 = a;
    D_001EF254.p->f168 = b;
}
