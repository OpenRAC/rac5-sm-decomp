/* LEVEL_09.REL:0x1A0148: reviewed 104-byte candidate, held for ABI review.
 * Two helper checks on a child record, returns whether the results agree with
 * zero.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_019740 returning int with no arguments, but the accepted
 * LEVEL_09_019740.c defines it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct P1A0148 {
    char pad0[0x54];
    struct Q1A0148 *f54;
};

struct Q1A0148 {
    char pad0[0x34];
    void *f34;
    void *f38;
};

extern int func_019740(void);
extern int func_0810E8(void *a, int b);

int func_1A0148(struct P1A0148 *p)
{
    struct Q1A0148 *q;
    int b;
    int c;

    q = p->f54;
    b = func_019740();
    if (func_0810E8(q->f34, b) != 0) {
        if (q->f38 != 0) {
            b = func_019740();
            c = func_0810E8(q->f38, b);
            if (c != 0) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
