/* LEVEL_07:0x027E28 -- reads a global record and updates a counter. */
typedef struct {
    char pad1C[0x1C];
    int f1C;
    char pad20[0x28];
    int f48;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_002082AC;
extern int D_002082B4;

void func_000000(float a0);

void func_027E28(float a0)
{
    Obj *o;
    float k;
    float v;

    o = D_002082AC.p;
    k = a0;
    if (o->f48 < 0) {
        o->f48 = o->f1C;
    }
    v = (float)D_002082AC.p->f1C / 255.0f;
    v = v * k;
    func_000000(v);
    D_002082B4 = 5;
}
