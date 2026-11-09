/* LEVEL_08:0x1C3C08 -- placement copy of LEVEL_01_193A58.c: fires an object's spawn callback and finishes the pending request when the owner matches. */
typedef struct Sub {
    int mode;
    float scale;
    int f_08;
    int f_0C;
} Sub;

typedef struct Gl {
    char pad_00[0x530];
    Sub sub;
} Gl;

typedef struct Cb {
    char pad_00[0x20];
    int (*fn)(void *self, int a, float f, int b, int c, int d, void *e);
    int f_24;
} Cb;

typedef struct Req {
    int *id;
    char pad_04[4];
    int f_08;
    int f_0C;
    char pad_10[0x1C];
    float f_2C;
} Req;

typedef struct Own {
    char pad_00[0x40];
    Cb *cb;
    Gl *g;
    char pad_44[0x10];
    Req *req;
} Own;

typedef struct Tgt {
    char pad_00[0x40];
    Cb *cb;
    Gl *g;
} Tgt;

typedef struct Ent {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Ent;

typedef struct Ref {
    char pad_00[0x3C];
    int f_3C;
} Ref;

extern Gl D_002629D8;
extern unsigned char D_00251ECC;
extern unsigned char D_00251ECD;
extern struct { char pad[8]; unsigned char cnt; } D_002801B0;

extern int func_024EA8(int a, int b);
extern unsigned int func_024AB8(unsigned int a);
extern void func_088940(Own *o, Ent *e, int a, int b, int c, int d, int e2, int f, float f0, float f1, float f2, float f3);
extern void func_21C070(Own *o, Tgt *t, int a, int b);
extern void func_0167E8(int *p, int a, Tgt *t, int b);

void func_1C3C08(Own *o, Tgt *t)
{
    Req *r;
    Ref *ref;
    int res;
    Sub *s;
    Ent *e;
    Cb *cb;
    Gl *g;
    float f;

    if (*(int *)((char *)o->cb + 0x24) != (int)0xECFD0651) {
        return;
    }
    r = o->req;
    ref = (Ref *)func_024EA8(0xD, *(int *)((char *)r->id + 0xF8));
    cb = t->cb;
    if (cb->fn == 0) {
        res = -1;
    } else {
        g = &D_002629D8;
        s = &g->sub;
        if (s->mode < 0) {
            f = s->scale;
        } else if (s->mode < 2) {
            f = s->scale;
        } else if (s->mode == 2) {
            f = s->scale * 0.5f;
        } else {
            f = s->scale;
        }
        res = cb->fn(t, s->f_08, f, s->f_0C, 0, 0, o);
    }
    if (D_00251ECC) {
        if (D_00251ECD) {
            D_002801B0.cnt++;
        }
    }
    if (res) {
        e = (Ent *)func_024AB8(0);
        if (e) {
            func_088940(o, e, 0, 0, 0, 0, 0, 1, e->f_14, e->f_18, e->f_1C, e->f_20);
        }
        func_21C070(o, t, ref->f_3C, 0);
        func_0167E8(r->id, 0xD, t, res);
    }
    r->f_08 = 0;
    r->f_2C = -1.0f;
    r->f_0C = 0;
}
