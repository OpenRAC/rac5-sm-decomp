typedef struct {
    char pad[0x20C];
    float f20C;
    char pad2[0x218 - 0x210];
    float f218;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_00203ED4;

void func_003038(float a, float b)
{
    D_00203ED4.p->f20C = a;
    D_00203ED4.p->f218 = b;
}
