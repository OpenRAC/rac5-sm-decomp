/* LEVEL_01:0x058E00 -- walks the three pointer lists of an object and applies the matching visitor to every entry. */
typedef struct {
    int *a[8];
    int na;
    int *b[16];
    int nb;
    int *c[32];
    int nc;
} Obj;

extern void func_135ED0(void);
extern void func_135F00(void);
extern void func_135E88(void);

void func_058E00(Obj *o, int a1, int a2)
{
    int **p;
    int **q;
    int **r;
    int **e1;
    int **e2;
    int **e3;

    p = o->a;
    e1 = p + o->na;
    for (; p != e1; p++) {
        ((void (*)(int *, int, int))func_135ED0)(*p, a1, a2);
    }
    q = o->b;
    e2 = q + o->nb;
    for (; q != e2; q++) {
        ((void (*)(int *, int, int))func_135F00)(*q, a1, a2);
    }
    r = o->c;
    e3 = r + o->nc;
    for (; r != e3; r++) {
        ((void (*)(int *, int, int))func_135E88)(*r, a1, a2);
    }
}
