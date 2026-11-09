/* LEVEL_04.REL:0x176AE0: reviewed 240-byte candidate, held for ABI review.
 * Updates an actor and triggers it when close to its target.
 * pinned C with gnu-ee-trial links 240/240 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct { char pad0[0x45]; unsigned char kind; } Info;
typedef struct { char pad0[0x30]; float f30; float f34; float f38; } Pos;
typedef struct { int pad0[5]; void *f14; } Res;
typedef struct { char pad0[8]; Info *info; char pad0C[0x15C - 0x0C]; Pos *pos; } B;
typedef struct { int f0; } A;
typedef struct { char pad0[0x30]; float f30; char pad34[4]; float f38; char pad3C[0x54 - 0x3C]; A *a; B *b; } O;
extern Res *func_177868(O *o);
extern void func_033678(O *o);
extern void func_1D57E0(int a, O *o, void *buf, float *p);
extern void func_177720(void *a0, void *a1, float *a2, void *a3, void *t0);
extern void func_1DDE60(O *o);

void func_176AE0(O *o)
{
    float buf[4];
    B *b;
    A *a;
    Res *r;
    Pos *c;
    float *p;
    int h;

    b = o->b;
    a = o->a;
    r = func_177868(o);
    h = a->f0;
    func_033678(o);
    c = b->pos;
    p = &c->f30;
    func_1D57E0(h, o, buf, p);
    func_177720((char *)b + 0xB4, o, buf, r->f14, 0);
    if (b->info->kind != 9) {
        float dx = c->f30 - o->f30;
        float dz = p[2] - o->f38;
        if (dx * dx + dz * dz <= 1.5625f)
            func_1DDE60(o);
    }
}
