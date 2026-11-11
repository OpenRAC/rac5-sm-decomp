/* LEVEL_04:0x170AB0 -- ticks a countdown and triggers an effect when it expires. */
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
extern Target *D_00220E4C;
extern void func_1F3210(Pair *p);
extern void func_0E3500(float f, State *s, unsigned int c);
extern void func_083E30(Obj *o, Target *t, float a, float b, float c, float d, int e, int f, int g, int h, int i, int j);

void func_170AB0(Obj *o)
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
        func_1F3210(&p);
        func_0E3500(1.5f, s, 0xFF8080);
        if (D_00220E4C != 0) {
            func_083E30(o, D_00220E4C, D_00220E4C->a, D_00220E4C->b, D_00220E4C->c, D_00220E4C->d, 0, 0, 0, 0, 0, 1);
        }
        o->mode = 4;
        s->val58 = 36.00071716308594f;
    }
}
