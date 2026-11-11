typedef struct {
    char  pad[0x20C];
    float f20C;
    char  gap[8];
    float f218;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_0019BE5C;

void func_002FC8(float a, float b)
{
    D_0019BE5C.p->f20C = a;
    D_0019BE5C.p->f218 = b;
}
