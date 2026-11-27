/* LEVEL_19:0x12B930 -- placement copy of LEVEL_01_145FB0.c: spawns a set of child entries for an object once, then scales its position into each child. */
typedef struct { float x; float y; float z; int pad; void *owner; } V;
typedef struct { char pad[0x30]; V v; } E;
typedef struct { char pad[0x5C]; E *e[11]; char pad88[5]; unsigned char done; } S;
typedef struct { char pad[0x10]; V v; char pad24[0x34]; S *s; } O;
extern char D_001D2178[];
extern const unsigned D_001D21A4;
extern int func_0D5EF0(E **dst, char *tbl, O *o, int a, int b, int c);
extern void func_0D6030(E *e);

static inline void scale(V *d, V *s, void *owner, float k)
{
    d->owner = owner;
    d->x = s->x * k;
    d->y = s->y * k;
    d->z = s->z * k;
}
void func_12B930(O *o)
{
    S *s = o->s;
    unsigned i;

    if (s->done == 0) {
        if (func_0D5EF0(s->e, D_001D2178, o, 1, 1, 1) != 0)
            s->done = 1;
    } else {
        for (i = 0; i < D_001D21A4; i++) {
            E *e = s->e[i];
            if (e != 0) {
                scale(&e->v, &o->v, o, -0.6f);
                func_0D6030(e);
            }
        }
    }
}
