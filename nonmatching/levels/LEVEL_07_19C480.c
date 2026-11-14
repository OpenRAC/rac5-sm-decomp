/* USA LEVEL_07.REL:0x19C480, 188-byte candidate (14 November 2026).
 * Measured pinned: 8 differing words; first difference at 0x48.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct GRec { char pad00[0x14]; float f14; float f18; float f1C; float f20; } GRec;
typedef struct Step { char pad00[0x1C]; unsigned char b1C; } Step;
typedef struct Tgt { char pad00[0x45]; unsigned char b45; } Tgt;
typedef struct Obj { char pad00[0x2C]; Tgt *w2C; } Obj;
typedef struct Ent { char pad00[0xC]; void (*fn)(void *a, void *b, void *c); char pad10[4]; } Ent;
extern GRec *D_0021D07C;
extern Ent D_00239850[];
extern void func_082B38(void *a, GRec *r, float *vec, int b, int c, int d, int e, int f, float x, float y, float z, float w);
void func_19C480(void *a, Step *s, Obj *o)
{
    GRec *r;
    Ent *e;
    if ((o->w2C->b45 ^ 1) == 0) {
        r = D_0021D07C;
        if (r != 0) {
            func_082B38(a, r, (float *)((char *)s + 0x18), 0, 0, 0, 0, 1, r->f14, r->f18, r->f1C, r->f20);
        }
        s->b1C = s->b1C + 1;
        e = &D_00239850[s->b1C];
        if (e->fn != 0) e->fn(a, s, o);
    }
}
