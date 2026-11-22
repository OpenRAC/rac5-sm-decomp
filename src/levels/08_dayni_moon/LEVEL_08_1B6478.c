/* LEVEL_08:0x1B6478 -- counts the object's timer down; while it runs, follows the shared target and sets its height from the timer, when it runs out starts a random effect if the object is near the reference point. */
typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x1C];
    int w58;
    char pad5C[0x14];
    float f70;
} Obj;

extern float D_002843D0[];
extern float D_00270340[];
extern float D_0026F55C;

extern void func_1B6BB0(void);
extern int func_0288B8(void);
extern void func_040D98(int a, int b, float *pos, int c, Obj *o, float f);
extern void func_136C80(Obj *a, Obj *b, int c);

void func_1B6478(Obj *o)
{
    float t;
    float dx;
    float dz;
    float *p;

    t = o->f70 - 0.02222222276031971f;
    o->f70 = t;
    if (t <= 0.0f) {
        func_1B6BB0();
        p = o->pos;
        dx = p[0] - D_002843D0[12];
        dz = p[2] - D_002843D0[14];
        if (dx * dx + dz * dz <= 2.5f) {
            func_040D98(0, 3, p, 0, o, D_00270340[func_0288B8()]);
        }
    } else {
        func_136C80(o, o, o->w58);
        o->pos[1] = D_0026F55C + o->f70 * 60.0f;
    }
}
