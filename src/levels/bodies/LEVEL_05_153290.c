/* LEVEL_05:0x153290 -- placement copy of LEVEL_01_15F268.c: spawns the debris entity of a hit at the source position (and, one time in ten, a second one), then hands the last one to the effect setup. */
typedef struct V4 {
    float x;
    float y;
    float z;
    float w;
} V4;

typedef struct Body {
    char pad00[0x18];
    unsigned char sel;
    unsigned char kind;
} Body;

typedef struct Ent {
    char pad00[0x30];
    V4 pos;
    char pad40[0x54 - 0x40];
    Body *body;
} Ent;

typedef struct Src {
    char pad00[0x30];
    V4 pos;
} Src;

typedef struct Def {
    char pad00[0x3C];
    unsigned char kind;
    char pad3D[3];
    int param;
} Def;

typedef struct Pool {
    char pad00[0xF8];
    int table;
} Pool;

extern Pool D_00220E40;

extern int rand(void);
extern void func_153B70(Src *s, int a, int b);
extern void func_1BA090(Src *s);
extern Ent *func_153460(Src *s, unsigned char *sel, Pool *p);
extern Def *func_023608(int sel, int table);
extern Ent *func_1CAA18(int kind, int param, Src *s);
extern void func_1535B8(Src *s, int a, Ent *e, int b);

static __inline__ void CopyV4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

static __inline__ void Init(Ent *e, Src *s, Def *d, unsigned char *sel)
{
    Body *b;

    b = e->body;
    b->kind = d->kind;
    b->sel = *sel;
    CopyV4(&e->pos.x, &s->pos.x);
    e->pos.y = e->pos.y + 0.2f;
}

int func_153290(Src *s, int a, int flag, int b)
{
    Ent *e;
    Def *d;
    unsigned char sel;
    int mode;

    mode = 1;
    sel = 0;
    if ((float)rand() * 4.6566123e-10f < 0.1f) {
        mode = 2;
    }
    if (flag == 0) {
        func_153B70(s, 4, 0);
        func_1BA090(s);
    }
    e = func_153460(s, &sel, &D_00220E40);
    d = func_023608(sel, D_00220E40.table);
    if (e != 0) {
        Init(e, s, d, &sel);
    }
    if (mode == 2) {
        e = func_1CAA18(0x23823240, d->param, s);
        if (e != 0) {
            Init(e, s, d, &sel);
        }
    }
    func_1535B8(s, a, e, b);
    return 1;
}
