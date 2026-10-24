typedef struct {
    char  pad[0x164];
    float f164;
    float f168;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_001F8254;

void func_003918(float a, float b)
{
    D_001F8254.p->f164 = a;
    D_001F8254.p->f168 = b;
}
