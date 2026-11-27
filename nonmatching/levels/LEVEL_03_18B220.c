/* USA LEVEL_03:18B220, 220-byte candidate; measured 26 November 2026.
 * Profile gnu-ee-trial, assembler gnu-ee-trial; options: default.
 * Compiled 220 bytes: 6 differing words; first difference +0x14. No matching credit.
 * Remaining issue: register swap: do-while loop with the copies ordered p1.x, p0.y, p1.y, p1.z
 * makes the float part exact (was 12 words); self (retail s1) and the counter i (retail s2)
 * remain swapped; counter forms, declaration order, return-vs-break and 7 routes tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_03:0x18B220 -- samples a position up to ten times until a query returns -1. */
typedef struct Vec { float x, y, z; } Vec;
typedef struct Q { int a; float b; int c; } Q;
typedef struct T {
    Vec p0;
    Vec p1;
    Q q;
} T;
typedef struct In { char pad[4]; void *f4; } In;
typedef struct Obj { char pad0[0x34]; float f34; char pad1[0x54 - 0x38]; In *p54; } Obj;
extern void func_084D48(void *a, Vec *out);
extern int func_10FA38(T *t, int x);
void func_18B220(Obj *self, Vec *out)
{
    T t;
    Q *qp = &t.q;
    unsigned i;
    In *in = self->p54;
    i = 0;
    do {
        func_084D48(in->f4, &t.p0);
        t.p1.x = t.p0.x;
        t.p0.y = self->f34;
        t.p1.y = self->f34 + 10.0f;
        t.p1.z = t.p0.z;
        t.q.a = 0;
        qp->b = 10.0f;
        t.q.c = 0;
        out->x = t.p0.x;
        out->y = t.p0.y;
        out->z = t.p0.z;
        if (func_10FA38(&t, 0) == -1)
            break;
        i++;
    } while (i < 10);
}
