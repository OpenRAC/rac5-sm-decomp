/* LEVEL_09:0x0554F0 -- placement copy of LEVEL_01_058E00.c: walks the three pointer lists of an object and applies the matching visitor to every entry. */
typedef struct {
    int *a[8];
    int na;
    int *b[16];
    int nb;
    int *c[32];
    int nc;
} Obj;

extern void func_16D450(int *, int, int);
extern void func_16EE80(int *, int, int);
extern void func_16BBB0(int *, int, int);

void func_0554F0(Obj *o, int a1, int a2)
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
        func_16D450(*p, a1, a2);
    }
    q = o->b;
    e2 = q + o->nb;
    for (; q != e2; q++) {
        func_16EE80(*q, a1, a2);
    }
    r = o->c;
    e3 = r + o->nc;
    for (; r != e3; r++) {
        func_16BBB0(*r, a1, a2);
    }
}
