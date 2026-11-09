/* LEVEL_06:0x1BF0F8 -- placement copy of LEVEL_03_1E38B0.c: dispatches per-element callbacks for two tables. */
typedef struct A { char pad[0x14]; } A;
typedef struct B { char pad[0x10]; } B;
typedef struct E1 { char pad[0x80]; } E1;
typedef struct E2 { char pad[0x34]; } E2;
typedef struct S { float f; E1 *a; unsigned int n1; E2 *b; unsigned int n2; } S;
extern void func_1BDF80(A *, E1 *, int, float, float, int, float);
extern void func_1BE940(B *, E2 *, int, float, float);
void func_1BF0F8(A *da, B *db, int p, S *s, int q, float x, float y)
{
    unsigned int i, j, n, m;
    float f;
    n = s->n1;
    f = s->f;
    for (i = 0; i != n; i++)
        func_1BDF80(da + i, s->a + i, p, x, f, q, y);
    m = s->n2;
    for (j = 0; j != m; j++)
        func_1BE940(db + j, s->b + j, p, x, f);
}
