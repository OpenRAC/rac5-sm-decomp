/* LEVEL_03.REL:0x1625D0: reviewed 276-byte candidate, held for ABI review.
 * Two state setters that bind a handle to an actor and clear its busy flags.
 * gnu-ee-trial C with gnu-ee-trial links 276/276 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_168260 returning int with (int, pointer, pointer, float,
 * float), but the accepted LEVEL_01_16CDE8.c defines it returning int with
 * (pointer, pointer, int, float, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct { char pad[0x2C]; int h; int f30; char pad2[0x48 - 0x34]; float t; } A;
typedef struct { char pad[0x40]; int v; } B;
typedef struct { char pad[0x54]; A *a; B *b; char pad2[0x64 - 0x5C]; int flags; } Obj;
extern void func_162010(Obj *o, int n);
extern int func_168260(int h, Obj *o, A *a, float x, float y);

void func_1625D0(Obj *o, float t)
{
    B *b = o->b;
    A *a = o->a;

    func_162010(o, 0x10);
    a->t = t;
    b->v = func_168260(a->h, o, a, 0.5f, 1.0f);
    o->flags &= ~0x20;
    o->flags &= ~0x400;
}

void func_162660(Obj *o)
{
    B *b = o->b;
    A *a = o->a;

    b->v = func_168260(a->h, o, a, 0.5f, 1.0f);
    func_162010(o, 0x12);
    o->flags &= ~0x20;
    o->flags &= ~0x400;
    a->f30 = 0;
}
