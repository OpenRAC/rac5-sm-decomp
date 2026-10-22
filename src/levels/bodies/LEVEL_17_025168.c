typedef struct { char pad1C[0x1C]; int f1C; char pad20[0x28]; int f48; } Obj;
typedef struct { Obj *p; } Holder;
extern Holder D_001950B4;
extern int D_001950E0;
void func_000000(float a0);
void func_025168(float a0)
{
    Obj *o;
    float k;
    float v;
    o = D_001950B4.p;
    k = a0;
    if (o->f48 < 0) {
        o->f48 = o->f1C;
    }
    v = (float)D_001950B4.p->f1C / 255.0f;
    v = v * k;
    func_000000(v);
    D_001950E0 = 5;
}
