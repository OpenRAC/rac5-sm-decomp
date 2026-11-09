/* LEVEL_01.REL:0x108D80: reviewed 252-byte candidate, held for ABI review.
 * Runs up to three list-driven callbacks for a node.
 * gnu-ee-trial C with gnu-ee-trial links 252/252 bytes and is byte-exact at
 * this and 31 other USA placements, but the prototypes disagree.
 * It declares func_108E80 returning void with (int, float, float), but the
 * accepted LEVEL_04_114FB8.c defines it returning void with (pointer, float,
 * float).
 * It declares func_108E90 returning void with (int, float, pointer), but the
 * accepted LEVEL_01_108E90.c defines it returning void with (pointer, float,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct E { float a; float b; char pad[0xC]; } E;
typedef struct T { char pad[8]; E *e; unsigned short n0; unsigned short n1; } T;
typedef struct N { T *t; struct N *next; } N;
extern int func_097690(int *, N *, int);
extern void func_108E80(int, float, float);
extern void func_108E90(int, float, float *);
void func_108D80(N *n, float *p, int flag)
{
    int l0, l1, l2;
    int r2;
    if (flag && n->next != n) {
        T *t = n->t;
        int k = t->n0 + t->n1 - 1;
        E *e = t->e + k;
        float a = e->a;
        float b = e->b;
        int r0 = func_097690(&l0, n, 1);
        int r1;
        if (!l0)
            return;
        func_108E80(r0, b, a);
        r1 = func_097690(&l1, n, 1);
        if (!l1)
            return;
        func_108E80(r1, *p, 1.0f);
    }
    r2 = func_097690(&l2, n, 1);
    if (l2)
        func_108E90(r2, 1.0f, p);
}
