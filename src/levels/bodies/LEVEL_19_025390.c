/* LEVEL_19:0x025390 -- reads a global record and updates a counter. */
typedef struct {
    char pad1C[0x1C];
    int f1C;
    char pad20[0x28];
    int f48;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_001A2C34;
extern int D_001A2C60;

void func_000000(float a0);

void func_025390(float a0)
{
    Obj *o;
    float k;
    float v;

    o = D_001A2C34.p;
    k = a0;
    if (o->f48 < 0) {
        o->f48 = o->f1C;
    }
    v = (float)D_001A2C34.p->f1C / 255.0f;
    v = v * k;
    func_000000(v);
    D_001A2C60 = 5;
}
