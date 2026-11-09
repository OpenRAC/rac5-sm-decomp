/* LEVEL_01.REL:0x193A58: reviewed 412-byte candidate, held for ABI review.
 * Fires an object's spawn callback and finishes the pending request when the
 * owner matches.
 * pinned C with gnu-ee-trial links 412/412 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_024628 returning pointer with (int, int), but the accepted
 * LEVEL_01_024628.c defines it returning int with (int, int).
 * It declares func_024238 returning pointer with (int), but the accepted
 * LEVEL_01_024238.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern Gl D_00218D58;
extern unsigned char D_002087A4;
extern unsigned char D_002087A5;
extern struct { char pad[8]; unsigned char cnt; } D_00230F30;

extern Ref *func_024628(int a, int b);
extern Ent *func_024238(int a);
extern void func_0809D0(Own *o, Ent *e, int a, int b, int c, int d, int e2, int f, float f0, float f1, float f2, float f3);
extern void func_1DA560(Own *o, Tgt *t, int a, int b);
extern void func_015D88(int *p, int a, Tgt *t, int b);

void func_193A58(Own *o, Tgt *t)
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
    ref = func_024628(0xD, *(int *)((char *)r->id + 0xF8));
    cb = t->cb;
    if (cb->fn == 0) {
        res = -1;
    } else {
        g = &D_00218D58;
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
    if (D_002087A4) {
        if (D_002087A5) {
            D_00230F30.cnt++;
        }
    }
    if (res) {
        e = func_024238(0);
        if (e) {
            func_0809D0(o, e, 0, 0, 0, 0, 0, 1, e->f_14, e->f_18, e->f_1C, e->f_20);
        }
        func_1DA560(o, t, ref->f_3C, 0);
        func_015D88(r->id, 0xD, t, res);
    }
    r->f_08 = 0;
    r->f_2C = -1.0f;
    r->f_0C = 0;
}
