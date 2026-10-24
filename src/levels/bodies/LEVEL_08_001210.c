typedef struct {
    char  pad[0x10C];
    float f10C;
    float f110;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_00237DC8;

void func_001210(float a, float b)
{
    D_00237DC8.p->f10C = a;
    D_00237DC8.p->f110 = b;
}
