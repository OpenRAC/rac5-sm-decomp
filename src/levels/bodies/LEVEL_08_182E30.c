/* LEVEL_08:0x182E30 -- placement copy of LEVEL_04_177640.c: picks a target for an actor: a found one, a fallback, or a probe result. */
typedef struct Cls {
    char pad0[0x24];
    int f24;
} Cls;
typedef struct Tgt {
    char pad0[0x40];
    Cls *f40;
} Tgt;
typedef struct Hit {
    int f0;
} Hit;
typedef struct Own {
    char pad0[0x15C];
    void *f15C;
} Own;
typedef struct Ctx {
    int f0;
} Ctx;
typedef struct Act {
    char pad0[0x30];
    char f30[0x24];
    Ctx *f54;
    Own *f58;
} Act;
extern Tgt *func_182B40(Act *a);
extern void *func_182BE8(Act *a);
extern Hit *func_1FA3F0(int a, Act *b, char *c, int d, int e, float f, float g, float h, float i);

int func_182E30(Act *a)
{
    Ctx *c = a->f54;
    Own *o = a->f58;
    Tgt *t = func_182B40(a);
    void *v;
    Hit *h;

    if (t != 0 && t->f40->f24 == 0x66B80B74) {
        o->f15C = t;
        return 0;
    }
    v = func_182BE8(a);
    if (v != 0) {
        o->f15C = v;
        return 4;
    }
    if (t != 0) {
        o->f15C = t;
        return 0;
    }
    h = func_1FA3F0(c->f0, a, a->f30, 0, 0, 0.0f, 1.0000000150474662e+30f, -1.000100016593933f, 1.000100016593933f);
    o->f15C = h != 0 ? (void *)h->f0 : 0;
    return 4;
}
