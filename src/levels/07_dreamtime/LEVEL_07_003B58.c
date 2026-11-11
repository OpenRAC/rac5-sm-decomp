typedef struct {
    char pad[0x164];
    float f164;
    char pad2[0];
    float f168;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_00203554;

void func_003B58(float a, float b)
{
    D_00203554.p->f164 = a;
    D_00203554.p->f168 = b;
}
