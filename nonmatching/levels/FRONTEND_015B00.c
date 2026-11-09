/* FRONTEND.REL:0x015B00: reviewed 104-byte candidate, held for ABI review.
 * When a global flag is set, stores the argument (or two when the argument is
 * at most one) into a second global, calling a helper first when that global
 * is clear and the argument is non-zero.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this and
 * 20 other USA placements, but the prototypes disagree.
 * It declares func_002250 returning void with (int), but the accepted
 * FRONTEND_002250.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_00030354;
extern unsigned int D_00030364;

void func_002250(unsigned int a);

void func_015B00(unsigned int a0)
{
    unsigned int one;
    unsigned int v;

    if (D_00030354 == 0) {
        return;
    }
    if (D_00030364 == 0) {
        if (a0 != 0) {
            func_002250(a0);
        }
    }
    one = 1;
    v = 2;
    if (one < a0) {
        v = a0;
    }
    D_00030364 = v;
}
