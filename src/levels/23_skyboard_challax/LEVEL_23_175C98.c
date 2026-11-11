typedef struct { char pad00[0x24]; int f24; } Obj;
typedef struct {
    char pad00[0x08];
    void *f08;
    char pad0C[0x20];
    float f2C;
    char pad30[0x1C];
    unsigned char f4C;
} Sub;
typedef struct {
    char pad00[0x40];
    Obj *f40;
    char pad44[0x14];
    Sub *f58;
} Rec;
float func_175C20(void *a);
void func_175C98(Rec *a0, void *a1)
{
    Obj *q;
    Sub *p;
    float f;
    q = a0->f40;
    if (q->f24 != 0xECFD0651) {
        return;
    }
    p = a0->f58;
    f = func_175C20(a1);
    p->f2C = f;
    if (f != -1.0f) {
        p->f08 = a1;
        p->f4C = 1;
    }
}
