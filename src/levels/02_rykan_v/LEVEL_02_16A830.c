/* LEVEL_02:0x16A830 -- detaches an object from its owner's slot table and re-initializes it. */
typedef struct { void *obj; int f4; char pad8[0x10]; unsigned char b18; char pad19[2]; unsigned char b1B; } Ent;
typedef struct { Ent e[8]; char pad[0x30]; unsigned char tag; } Tbl;
typedef struct { char pad[8]; unsigned char cnt; } Cnt;
typedef struct { char pad[0x54]; void *p; } W;
typedef struct { char pad[0x14]; float f0; float f1; float f2; float f3; } Fx;
typedef struct { char pad0[0x10]; struct { char pad[0x54]; Tbl *t; } *a; char pad14[8]; struct { char pad[0x54]; Cnt *c; } *b; } Q;
typedef struct { char pad[0x45]; unsigned char k; } X;
typedef struct { char pad[0x45]; unsigned char k; char pad46[0xE]; Q *q; } O;
extern struct { int a; Fx *fx; } D_0024A5E0;
extern void func_0872A0(O *o, Fx *p, float a, float b, float c, float d, int e, int f, int g, int h, int i, int j);
extern void func_082F58(O *o, int a);
extern void func_1698B8(O *o, int a, int b);

void func_16A830(O *o)
{
    Q *q = o->q;
    Ent *s;
    Ent *e;
    Fx *fx;

    q->b->c->cnt--;
    q->a->t->tag = 0xFF;
    s = q->a->t->e;
    e = s + 8;
    do {
        if (s->obj == o) {
            s->obj = 0;
            s->b1B = 0;
            s->b18 = 0;
            s->f4 = 0;
            break;
        }
        s++;
    } while (s < e);
    fx = D_0024A5E0.fx;
    if (fx != 0)
        func_0872A0(o, fx, fx->f0, fx->f1, fx->f2, fx->f3, 0, 0, 0, 0, 0, 1);
    func_082F58(o, 1);
    func_1698B8(o, o->k, 0);
}
