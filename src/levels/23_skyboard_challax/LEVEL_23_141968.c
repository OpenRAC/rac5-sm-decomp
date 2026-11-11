/* LEVEL_23:0x141968 -- placement copy of LEVEL_22_118610.c: computes an object's bounding box from its matrix; second function tests the registered objects. */
extern float fabsf(float x);
extern int func_0728B0(float *box);

typedef struct {
    char pad0[0xCC];
    float min[3];
    float max[3];
    char pad1[0x29];
    unsigned char flag;
} Inner;

typedef struct {
    float m[16];
    char pad[0x18];
    Inner *inner;
} Obj;

typedef struct {
    Obj *list[128];
    int count;
} ObjTable;

extern ObjTable D_00363708;
extern unsigned char D_001DA9A0;
extern unsigned char D_001DA9A1;

void func_141968(Obj *o)
{
    Inner *in = o->inner;
    float ext[3];
    float *c;
    float *mx;
    float *mn;

    if (in != 0) {
        c = &o->m[12];
        mx = in->max;
        mn = in->min;
        ext[0] = fabsf(o->m[0]) + fabsf(o->m[4]) + fabsf(o->m[8]);
        ext[1] = fabsf(o->m[1]) + fabsf(o->m[5]) + fabsf(o->m[9]);
        ext[2] = fabsf(o->m[2]) + fabsf(o->m[6]) + fabsf(o->m[10]);
        in->max[0] = o->m[12] + ext[0];
        mx[1] = c[1] + ext[1];
        mx[2] = c[2] + ext[2];
        in->min[0] = o->m[12] - ext[0];
        mn[1] = c[1] - ext[1];
        mn[2] = c[2] - ext[2];
    }
}

void func_141A58(void)
{
    int i;
    Inner *in;

    D_001DA9A0 = D_00363708.count;
    D_001DA9A1 = 0;
    for (i = 0; i < D_00363708.count; i++) {
        if (D_00363708.list[i] != 0) {
            in = D_00363708.list[i]->inner;
            if (func_0728B0(in->min)) {
                in->flag = 1;
                D_001DA9A1++;
            }
        }
    }
    D_00363708.count = 0;
}
