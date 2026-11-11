/* LEVEL_07:0x178DA0 -- placement copy of LEVEL_02_1842D0.c: finishes an effect: notifies nearby objects, shakes the camera by distance, unlinks the node. */
typedef struct Self Self;
typedef struct Node { struct Node *next; char pad4[8]; unsigned short flags; char padE[6]; struct Node *prev; } Node;
typedef struct Inner { char pad[0x1C]; void *h; } Inner;
struct Self { char pad0[0x30]; float pos[3]; char pad3c[0x18]; Inner *in; Node *node; };
typedef struct Cls { char pad[0x20]; void (*fn)(void *, int, float, int, float *, int, Self *); } Cls;
typedef struct Obj { char pad[0x30]; float pos[3]; char pad3c[4]; Cls *cls; } Obj;
typedef struct Cam { char pad[0x14]; float v[4]; } Cam;
extern Obj *D_0024AFDC;
extern Cam *D_0021BD94;
extern char D_0024F650[];
extern char D_00223F30[];
extern void func_179A08(void *h, int a, int b);
extern unsigned int func_01CAA8(Obj **buf, int n, float r, float *pos, int a, int b, int c, int d);
extern Obj *func_0011D8(void);
extern void func_0A22D0(int a, float amp, float b, float c);
extern void func_082B38(Self *s, Cam *cm, float a, float b, float c, float d, int e, int f, int g, int h, int i, int j);
extern void func_0734A0(Self *s, char *a, char *b);
extern void func_07E7F0(Self *s, int a);

void func_178DA0(Self *self)
{
    Obj *buf[32];
    Inner *in;
    Node *n, *p;
    Obj *pl, *o, *me;
    Cam *cam;
    float dx, dy, dz, d2, amp;
    unsigned int cnt, i;
    float *sp, *pp;
    in = self->in;
    n = self->node;
    func_179A08(in->h, -1, 8);
    n->flags |= 8;
    cnt = func_01CAA8(buf, 32, 2.0f, self->pos, 0x129, 0x101, 0xFFFF, 1);
    n->flags &= ~8;
    func_179A08(in->h, -9, 0);
    me = D_0024AFDC;
    for (i = 0; i < cnt; i++) {
        o = buf[i];
        if (o == me) continue;
        if (o->cls->fn) o->cls->fn(o, 0, 3.0f, 2, self->pos, 0, self);
    }
    pl = func_0011D8();
    pp = pl->pos;
    dx = self->pos[0] - pl->pos[0];
    sp = self->pos;
    pp = pl->pos;
    dy = sp[1] - pp[1];
    dz = sp[2] - pp[2];
    d2 = dx * dx + dy * dy + dz * dz;
    amp = 6.0f;
    if (d2 > 1600.0f) {
        amp = 0.0f;
    } else if (d2 > 169.0f) {
        amp = (1.0f - (d2 - 169.0f) / 1431.0f) * amp;
    }
    func_0A22D0(0, amp, 20.0f, 0.6f);
    cam = D_0021BD94;
    if (cam) func_082B38(self, cam, cam->v[0], cam->v[1], cam->v[2], cam->v[3], 0, 0, 0, 0, 0, 1);
    func_0734A0(self, D_0024F650, D_00223F30);
    p = n->prev;
    if (p) {
        p->next = n->next;
        if (n->next) n->next->prev = n->prev;
        n->prev = 0;
    }
    func_07E7F0(self, 1);
}
