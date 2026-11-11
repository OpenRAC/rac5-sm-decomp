/* LEVEL_08:0x17BE58 -- placement copy of LEVEL_04_170AB0.c: ticks a countdown and triggers an effect when it expires. */
typedef struct State {
    char pad[0x54];
    float timer;
    float val58;
    char pad2[0x2C];
    int v88;
} State;
typedef struct Obj {
    char pad[0x45];
    char mode;
    char pad2[0x12];
    State *st;
} Obj;
typedef struct Target {
    char pad[0x14];
    float a, b, c, d;
} Target;
typedef struct Pair {
    int a;
    unsigned int b;
} Pair;
extern Target *D_00250934;
extern void func_21D580(Pair *p);
extern void func_0E8C10(float f, State *s, unsigned int c);
extern void func_088940(Obj *o, Target *t, float a, float b, float c, float d, int e, int f, int g, int h, int i, int j);

void func_17BE58(Obj *o)
{
    State *s;
    float t;
    int v;
    Pair p;

    t = o->st->timer - 1.0f;
    v = o->st->v88;
    o->st->timer = t;
    if (t <= 0.0f) {
        p.a = v;
        p.b = 0xFFFF8080;
        s = o->st;
        func_21D580(&p);
        func_0E8C10(1.5f, s, 0xFF8080);
        if (D_00250934 != 0) {
            func_088940(o, D_00250934, D_00250934->a, D_00250934->b, D_00250934->c, D_00250934->d, 0, 0, 0, 0, 0, 1);
        }
        o->mode = 4;
        s->val58 = 36.00071716308594f;
    }
}
