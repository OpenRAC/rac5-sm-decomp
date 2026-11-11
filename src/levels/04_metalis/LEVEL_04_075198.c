/* LEVEL_04:0x075198 -- spawns an effect object from a definition at a source position. */
struct Vec3 {
    float x, y, z;
};
struct Link {
    void *owner;
    void *def;
    void *pos;
    int zero;
    void *src;
};
struct Fx {
    void (*fn)(void);
    char pad4[4];
    int f8;
    struct Vec3 pos;
    char pad18[0];
    float f18;
    int f1C;
    struct Vec3 pos2;
    float f2C;
    struct Link link;
};
struct Def {
    char pad0[4];
    int f4;
    char pad8[0x3C];
    float f44;
    int *list;
    unsigned count;
};
struct Src {
    char pad[0x20];
    struct Vec3 pos;
};
struct Ent {
    unsigned short id;
    unsigned short pad;
};
extern struct Ent D_002B25C0[];
extern struct Fx *func_096CC0(int a, int b, int c, int d, int e);
extern void func_075408(struct Vec3 *a, struct Vec3 *b, void *c, struct Def *d);
extern void func_075A00(void);
extern int rand(void);

struct Fx *func_075198(void *owner, struct Def *def, struct Src *src)
{
    struct Fx *fx;
    unsigned r;
    int n;
    struct Vec3 *s;
    struct Vec3 *d;
    struct Link *lk;

    n = def->count;
    if (n != 0) {
        r = rand() % n;
    } else {
        r = 0;
    }
    fx = func_096CC0(0, 1, D_002B25C0[def->list[r]].id, 1, 1);
    if (fx == 0) {
        return 0;
    }
    fx->f18 = fx->f2C = def->f44;
    fx->f8 = fx->f1C = def->f4;
    fx->fn = func_075A00;
    s = &src->pos;
    d = &fx->pos;
    fx->pos.x = s->x;
    d->y = s->y;
    d->z = s->z;
    func_075408(s, &fx->pos2, owner, def);
    fx->link.owner = owner;
    lk = &fx->link;
    lk->src = src;
    lk->def = def;
    lk->pos = s;
    lk->zero = 0;
    return fx;
}
