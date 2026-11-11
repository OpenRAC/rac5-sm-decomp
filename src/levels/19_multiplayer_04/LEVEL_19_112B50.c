/* LEVEL_19:0x112B50 -- placement copy of LEVEL_16_1124B0.c: three-state countdown controller that launches an effect, waits out its timer, then finishes and resets. */
typedef struct {
    char pad0[0x20];
    float dir[3];
    char pad2C[4];
    float pos[3];
} Src;
typedef struct {
    char pad0[0x34];
    float f34;
} Part;
typedef struct {
    char pad0[0x64];
    unsigned int f64;
} Flag;
typedef struct {
    char pad0[0x30];
    char pos[0xD0];
    unsigned short f100;
    char pad102[6];
    unsigned short st;
    unsigned short f10A;
    char pad10C[0x2E0 - 0x10C];
    char v2E0[0x59C - 0x2E0];
    Flag *p59C;
    Part *p5A0;
    Part *p5A4;
    char pad5A8[4];
    Part *p5AC;
    char pad5B0[0x5D8 - 0x5B0];
    void *p5D8;
    char pad5DC[0xB30 - 0x5DC];
    float t;
    char padB34[5];
    unsigned char fB39;
} Obj;

extern Src *func_000DD0(void);
extern void func_037058(Obj *o);
extern void func_0E6888(int a, void *b);
extern void func_0373E0(Obj *o);
extern void func_15F820(void *a, void *b);
extern void func_044CC8(Obj *o, void *a, int *b, int *c, int d, float f, float g);
extern void func_112DD8(Obj *o);
extern void func_037870(Obj *o, int a);
extern void func_11D0F0(void);
extern void func_117748(Obj *o, Obj *p, int a, int b);
extern Src D_001CDE80;
extern char D_001B5D50[];
extern int D_002DF750;
extern float D_001E07AC;
extern char D_001D06C0[];
extern float D_001C4024;

void func_112B50(Obj *o)
{
    func_037058(o);
    switch (o->st) {
    case 0: {
        Src *p;
        float *a;
        float *b;
        float v[3];
        float k;

        if (func_000DD0())
            p = func_000DD0();
        else
            p = &D_001CDE80;
        k = 0.30000001192092896f;
        a = p->dir;
        b = p->pos;
        v[0] = b[0] + a[0] * k;
        v[1] = b[1] + a[1] * k;
        v[2] = b[2] + a[2] * k;
        func_0E6888(D_002DF750, D_001B5D50);
        o->t = k;
        o->st = 1;
        o->f10A = 1;
        o->p59C->f64 |= 0x20;
        if (o->p5A4)
            o->p5A4->f34 += 10000.0f;
        if (o->p5A0)
            o->p5A0->f34 += 10000.0f;
        if (o->p5AC)
            o->p5AC->f34 += 10000.0f;
        if (o->p5D8)
            func_0373E0(o);
        break;
    }
    case 1:
        o->t -= D_001E07AC;
        if (o->t <= 0.0f) {
            func_15F820(o->pos, D_001D06C0);
            o->st = 2;
            o->t = 0.6000000238418579f;
            o->f10A = 2;
        }
        break;
    case 2:
        o->t -= D_001E07AC;
        if (o->t <= 0.0f) {
            if (!o->fB39) {
                int x;
                int y;

                func_044CC8(o, o->v2E0, &x, &y, 0, 0.0f, D_001C4024);
                if (y != 3)
                    func_112DD8(o);
                o->f100 = 0;
                func_037870(o, 0x29);
                func_11D0F0();
                func_117748(o, o, 0, 0);
            }
        }
        break;
    }
}
