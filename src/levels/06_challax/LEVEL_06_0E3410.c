/* LEVEL_06:0x0E3410 -- spawns up to a configured number of objects at one position and collects them. */
struct Vec3 {
    float x, y, z;
};
struct Sub {
    char padc[0xC];
    void *cfg;
    int f10;
    char pad14[0x11];
    unsigned char b25;
};
struct Obj {
    void *vt;
    char pad4[8];
    struct Vec3 pos;
    char pad18[0x18];
    struct Sub s;
};
struct Cfg {
    char pad[0x34];
    unsigned n;
};
struct G {
    char pad[0x80];
    unsigned short h80;
};
extern struct G D_00284B40;
extern char D_000E3620;
extern struct Obj *func_08C818(int a, int b, int c, int d, int e);
extern void func_0E3760(struct Obj *o);

unsigned func_0E3410(struct Obj **out, struct Cfg *cfg, struct Vec3 *pos)
{
    struct Obj **p;
    unsigned n;
    struct Obj *o;
    struct Vec3 *d;
    struct Sub *sub;

    p = out;
    n = 0;
    while (n < cfg->n && (o = func_08C818(2, 3, D_00284B40.h80, 1, 1)) != 0) {
        o->vt = &D_000E3620;
        d = &o->pos;
        sub = &o->s;
        o->pos.x = pos->x;
        d->y = pos->y;
        d->z = pos->z;
        sub->cfg = cfg;
        sub->f10 = 0;
        sub->b25 = 0;
        func_0E3760(o);
        if (out != 0) {
            *p = o;
        }
        p++;
        n++;
    }
    return n;
}
