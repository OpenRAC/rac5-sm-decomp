/* LEVEL_18:0x04F038 -- placement copy of LEVEL_01_057A78.c: per-frame camera/listener sync: swaps the object's saved view block with the global one when flagged, places the global listener at the predicted position, resolves the target slot of the object's controller, and applies the view and the three audio parameters. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad0[0x54];
    int *w54;
} Ctl;

typedef struct {
    char pad0[0x10];
    float vel[3];
    char pad1C[0x30 - 0x1C];
    float pos[3];
    char pad3C[0xCA4 - 0x3C];
    Ctl *ctl;
    char padCA8[0xCC8 - 0xCA8];
    int slot;
    char padCCC[0xD4C - 0xCCC];
    float view[5];
    char padD60[0xFB0 - 0xD60];
    float lead;
} Obj;

typedef struct {
    char pad0[0x20];
    unsigned char b20;
    unsigned char b21;
    char pad22[0x30 - 0x22];
    float view[5];
} Glob;

extern Glob D_001EBB40;
extern Vec3 D_001EBB64;

extern void func_036608(void *obj);
extern void func_002DD8(float f, void *p, int a);
extern void func_04EA88(Obj *o, int target);
extern int func_04EDD8(float *buf, Obj *o, int target, int arg);
extern void func_003680(float *buf, int a, float f0, float f1);
extern void func_003038(float a, float b);
extern void func_003350(int a, int b, float v, float k);
extern void func_003380(int a, int b, float v, float k);
extern void func_0034A0(int a, int b, float v, float k);

static __inline__ void MulAdd3(float *d, float *p, float *v, float k)
{
    d[0] = p[0] + v[0] * k;
    d[1] = p[1] + v[1] * k;
    d[2] = p[2] + v[2] * k;
}

void func_04F038(Obj *o, int arg)
{
    float buf[4];
    float at[4];
    int target;
    int i;
    int *base;
    int *p6;

    func_036608(o);
    if (D_001EBB40.b21 != 0) {
        D_001EBB40.b21 = 0;
        for (i = 0; i < 5; i++) {
            D_001EBB40.view[i] = o->view[i];
        }
        MulAdd3(&D_001EBB64.x, o->pos, o->vel, o->lead);
    }
    if (D_001EBB40.b20 != 0) {
        for (i = 0; i < 5; i++) {
            o->view[i] = D_001EBB40.view[i];
        }
        func_002DD8(0.0f, &D_001EBB64, 0);
    } else {
        if (o->ctl == 0) {
            target = 0;
        } else {
            base = o->ctl->w54;
            if (o->slot >= 0) {
                p6 = base + 6;
                target = p6[o->slot];
            } else {
                target = base[4];
            }
        }
        if (target != 0) {
            func_04EA88(o, target);
        }
        if (func_04EDD8(buf, o, target, arg) != 0) {
            func_003680(buf, 0, 0.0f, -3.1415927f);
        }
        MulAdd3(at, o->pos, o->vel, o->lead);
        func_002DD8(0.0f, at, 0);
    }
    func_003038(0.0f, 0.0f);
    func_003350(0, 1, o->view[1], 1.0f);
    func_003380(0, 1, o->view[2], 1.0f);
    func_0034A0(0, 1, o->view[4], 1.0f);
}
