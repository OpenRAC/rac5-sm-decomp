/* LEVEL_01.REL:0x074DB0: reviewed 232-byte candidate, held for ABI review.
 * Releases a pooled entry by moving the last entry into its slot.
 * pinned C with gnu-ee-trial links 232/232 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_079568 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_079568.c defines it returning void with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Y {
    char pad0[0x10];
    void *p10;
} Y;
typedef struct {
    char pad0[0xDC];
    void *cb;
} Z;
typedef struct {
    char pad0[0x48];
    Z *z48;
} X;
typedef struct T {
    X *x;
    void *f4;
    char pad8[0x18];
    Y *y;
} T;
extern T D_00239E20[];
extern int D_001F60B4;
extern void func_074AA8(void);
extern void func_079568(X *x, void *f);
extern void func_080B38(Y *y);

void func_074DB0(T *t)
{
    int n;
    T *last;

    func_079568(t->x, func_074AA8);
    func_080B38(t->y);
    t->y = 0;
    if (t->x->z48->cb == func_074AA8)
        t->x->z48->cb = t->f4;
    n = --D_001F60B4;
    if (n != 0) {
        last = &D_00239E20[n];
        if (t != last) {
            *t = *last;
            if (t->y != 0)
                t->y->p10 = &t->y;
        }
    }
}
