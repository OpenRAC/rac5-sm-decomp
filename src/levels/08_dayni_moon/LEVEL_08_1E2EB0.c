/* LEVEL_08:0x1E2EB0 -- placement copy of LEVEL_01_108D80.c: runs up to three list-driven callbacks for a node. */
typedef struct E { float a; float b; char pad[0xC]; } E;
typedef struct T { char pad[8]; E *e; unsigned short n0; unsigned short n1; } T;
typedef struct N { T *t; struct N *next; } N;
extern float *func_09F6E8(int *, N *, int);
extern void func_1E2E90(float *, float, float);
extern void func_1E2EA0(float *, float, float *);
void func_1E2EB0(N *n, float *p, int flag)
{
    int l0, l1, l2;
    float *r2;
    if (flag && n->next != n) {
        T *t = n->t;
        int k = t->n0 + t->n1 - 1;
        E *e = t->e + k;
        float a = e->a;
        float b = e->b;
        float *r0 = func_09F6E8(&l0, n, 1);
        float *r1;
        if (!l0)
            return;
        func_1E2E90(r0, b, a);
        r1 = func_09F6E8(&l1, n, 1);
        if (!l1)
            return;
        func_1E2E90(r1, *p, 1.0f);
    }
    r2 = func_09F6E8(&l2, n, 1);
    if (l2)
        func_1E2EA0(r2, 1.0f, p);
}
