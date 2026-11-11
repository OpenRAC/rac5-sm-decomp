/* LEVEL_10:0x162668 -- placement copy of LEVEL_01_16B070.c: per-frame update of a timed effect object. */
typedef struct {
    char pad[0x64];
    unsigned flags;
} Tgt;
typedef struct {
    int h;
    int w4;
    char pad0[0x44 - 8];
    Tgt *tgt;
    float pos[3];
    float d[3];
    float f60;
    char pad1[4];
    int state;
} Obj;
extern Obj *func_162C38(int a);
extern void func_162BA8(int h);
extern void func_080DE0(Tgt *t, float *p, int a, int b);
extern void func_06D1A0(int *p);

void func_162668(int a, float *v)
{
    Obj *o = func_162C38(a);
    float *d;
    float *p;
    if (o == 0)
        return;
    o->f60 = o->f60 - 1.0f;
    if (o->f60 <= 0.0f) {
        func_162BA8(o->h);
        return;
    }
    if (o->state != 2) {
        if (o->state == 3 && o->tgt != 0) {
            if ((o->tgt->flags & 6) != 0)
                o->tgt = 0;
            else
                func_080DE0(o->tgt, o->pos, 0, 0);
        }
    } else {
        d = o->d;
        p = o->pos;
        p[0] = v[0] + d[0];
        p[1] = v[1] + d[1];
        p[2] = v[2] + d[2];
    }
    if (o->state != 0)
        func_06D1A0(&o->w4);
}
