/* LEVEL_07:0x1A2570 -- placement copy of LEVEL_01_1915C0.c: tests whether an object is within reach of the player. */
typedef struct Obj Obj;
typedef struct Glob { char pad0[0x34]; float f34; char pad38[0x334 - 0x38]; Obj *f334; } Glob;
typedef struct Info { char pad0[0x14]; float radius; } Info;
typedef struct Link { char pad0[0x18]; void *f18; } Link;
struct Obj { char pad0[0x30]; float x; float f34; float z; char pad3C[9]; unsigned char f45; char pad46[0x54 - 0x46]; Info *info; Link *link; };
typedef struct V { float x, y, z, w; } V;
extern Glob D_0024AA40;
extern int func_15A898(void *p);
extern void func_01A9F0(V *v);

int func_1A2570(Obj *o)
{
    V v;
    int found = 0;
    Link *l = o->link;
    Info *s = o->info;
    float r2;
    float d2;
    Glob *g;

    if (l->f18)
        found = func_15A898(l->f18);
    g = &D_0024AA40;
    if (g->f334 != o && found == 0)
        return 0;
    if (o->f45 == 1 || g->f34 - o->f34 < 0.5f) {
        if (s->radius == 0.0f)
            return 1;
        func_01A9F0(&v);
        v.x = v.x - o->x;
        v.z = v.z - o->z;
        d2 = v.x * v.x + v.z * v.z;
        r2 = s->radius * s->radius;
        if (r2 < d2)
            return 0;
        return 1;
    }
    return 0;
}
