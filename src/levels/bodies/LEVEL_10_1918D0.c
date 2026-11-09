/* LEVEL_10:0x1918D0 -- switches an object's mode, latching its transform and timers into the mode record. */
typedef struct Rec {
    float m[16];
    char pad40[8];
    float v48[3];
    float f54;
    int f58;
    int f5C;
    float f60;
} Rec;
typedef struct Obj {
    float m[16];
    char pad40[5];
    unsigned char mode;
    char pad46[0x12];
    Rec *rec;
    char pad5C[0x14];
    float f70;
} Obj;
typedef struct Cfg {
    char pad0[0x14];
    float a;
    float b;
    float c;
    float d;
} Cfg;

extern Cfg *D_003A02D4;
extern float D_0022CCB8[];
extern void func_081000(Obj *o, Cfg *c, int a, int b, int d, int e, int f, int g, float f0, float f1, float f2, float f3);

void func_1918D0(Obj *obj, unsigned char state)
{
    Rec *r;
    Cfg *c;
    float *dp;
    float *sp;

    r = obj->rec;
    switch (state) {
    case 2:
        r->f58 = 0;
        r->f5C = 0;
        r->m[8] = obj->m[8];
        r->m[9] = obj->m[9];
        r->m[10] = obj->m[10];
        r->m[11] = obj->m[11];
        r->m[0] = obj->m[0];
        r->m[1] = obj->m[1];
        r->m[2] = obj->m[2];
        r->m[3] = obj->m[3];
        r->m[4] = obj->m[4];
        r->m[5] = obj->m[5];
        r->m[6] = obj->m[6];
        r->m[7] = obj->m[7];
        r->m[12] = obj->m[12];
        r->m[13] = obj->m[13];
        r->m[14] = obj->m[14];
        r->m[15] = obj->m[15];
        r->f60 = 0.06666667014360428f;
        obj->f70 = 15.0f;
        break;
    case 3:
        c = D_003A02D4;
        if (c) func_081000(obj, c, 0, 0, 0, 0, 0, 1, c->a, c->b, c->c, c->d);
        r->f54 = 1.0f;
        dp = r->v48;
        sp = D_0022CCB8;
        dp[0] = sp[0];
        dp[1] = sp[1];
        dp[2] = sp[2];
        r->m[8] = obj->m[8];
        r->m[9] = obj->m[9];
        r->m[10] = obj->m[10];
        r->m[11] = obj->m[11];
        r->m[0] = obj->m[0];
        r->m[1] = obj->m[1];
        r->m[2] = obj->m[2];
        r->m[3] = obj->m[3];
        r->m[4] = obj->m[4];
        r->m[5] = obj->m[5];
        r->m[6] = obj->m[6];
        r->m[7] = obj->m[7];
        r->m[12] = obj->m[12];
        r->m[13] = obj->m[13];
        r->m[14] = obj->m[14];
        r->m[15] = obj->m[15];
        break;
    case 4:
        obj->f70 = 7.5f;
        break;
    case 5:
        r->f60 = 0.0f;
        break;
    }
    obj->mode = state;
}
