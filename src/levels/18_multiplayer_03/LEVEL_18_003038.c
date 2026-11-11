typedef struct {
    char pad[0x20C];
    float f20C;
    char pad2[0x218 - 0x210];
    float f218;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_0019C15C;

void func_003038(float a, float b)
{
    D_0019C15C.p->f20C = a;
    D_0019C15C.p->f218 = b;
}
