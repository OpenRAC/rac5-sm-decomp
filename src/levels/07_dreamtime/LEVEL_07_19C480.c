/* LEVEL_07:0x19C480 -- handler: while the target object is in state 1 it spawns the effect through the helper from the global record, advances the step counter and runs the step's callback from the table. */
typedef struct GRec { char pad00[0x14]; float f14; float f18; float f1C; float f20; } GRec;
typedef struct Step { char pad00[0x1C]; unsigned char b1C; } Step;
typedef struct Tgt { char pad00[0x45]; unsigned char b45; } Tgt;
typedef struct Obj { char pad00[0x2C]; Tgt *w2C; } Obj;
typedef struct Ent { char pad00[0xC]; void (*fn)(void *a, Step *b, Obj *c, struct Ent *d); char pad10[4]; } Ent;
extern GRec *D_0021D07C;
extern Ent D_00239850[];
extern void func_082B38(void *a, GRec *r, float *vec, int b, int c, int d, int e, int f, float x, float y, float z, float w);
static __inline__ void Fire(void *a, float *p)
{
    if (D_0021D07C != 0) {
        func_082B38(a, D_0021D07C, p, 0, 0, 0, 0, 1,
                    D_0021D07C->f14, D_0021D07C->f18, D_0021D07C->f1C, D_0021D07C->f20);
    }
}
void func_19C480(void *a, Step *s, Obj *o)
{
    Ent *e;
    if ((o->w2C->b45 ^ 1) == 0) {
        Fire(a, (float *)((char *)s + 0x18));
        e = &D_00239850[++s->b1C];
        if (e->fn != 0) e->fn(a, s, o, e);
    }
}
