/* LEVEL_05:0x19E6E8 -- placement copy of LEVEL_01_1A3BE8.c: finds nearby objects, triggers their callbacks and plays an effect for each. */
typedef struct Sub {
    int mode;
    float scale;
    int f_08;
    int f_0C;
} Sub;

typedef struct Gl {
    char pad_00[0xEF0];
    Sub sub;
} Gl;

typedef struct Cb {
    char pad_00[0x20];
    int (*fn)(void *self, int a, float f, int b, int c, int d, void *e);
} Cb;

typedef struct Own {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x1C];
    int *req;
} Own;

typedef struct Tgt {
    char pad_00[0x40];
    Cb *cb;
    char pad_44[0x20];
    unsigned flags;
} Tgt;

typedef struct Ent {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Ent;

extern Gl D_00207C58;

extern int func_01B980(Tgt **buf, int n, float *pos, int a, int b, int c, int d, float r);
extern Ent *func_0231D0(int a);
extern void func_07E070(Own *o, Ent *e, int a, int b, int c, int d, int e2, int f, float f0, float f1, float f2, float f3);
extern void func_07DE50(Tgt *t, float *v, int a, int b);
extern void func_0160C8(int a, int b, Tgt *t, int c);
extern void func_0EBA70(int a, float *v);

void func_19E6E8(Own *o)
{
    Tgt *buf[16];
    float vec[4];
    unsigned i;
    unsigned n;
    Tgt *t;
    Cb *cb;
    Sub *s;
    Gl *g;
    Ent *e;
    int res;
    float f;
    float h;

    n = func_01B980(buf, 16, o->pos, 0x129, 0x101, 2, 1, 15.0f);
    e = func_0231D0(5);
    if (e) {
        func_07E070(o, e, 0, 0, 0, 0, 0, 1, e->f_14, e->f_18, e->f_1C, e->f_20);
    }
    for (i = 0; i < n; i++) {
        h = 0.5f;
        t = buf[i];
        if (t->cb->fn != 0) {
            if (t->flags & 0x200) {
                func_07DE50(t, vec, 0, 0);
                cb = t->cb;
                if (cb->fn == 0) {
                    res = -1;
                } else {
                    g = &D_00207C58;
                    s = &g->sub;
                    if (s->mode < 0) {
                        f = s->scale;
                    } else if (s->mode < 2) {
                        f = s->scale;
                    } else if (s->mode == 2) {
                        f = s->scale * h;
                    } else {
                        f = s->scale;
                    }
                    res = cb->fn(t, s->f_08, f, s->f_0C, 0, 0, o);
                }
                func_0160C8(*o->req, 0xF, t, res);
                func_0EBA70(0x23, vec);
            }
        }
    }
}
