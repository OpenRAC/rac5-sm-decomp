/* LEVEL_08.REL:0x16F680: reviewed 152-byte candidate, held for ABI review.
 * Collects a list of handles and runs a check and a follow-up on each.
 * pinned C with gnu-ee-trial links 152/152 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning void with (pointer), but the accepted
 * caller LEVEL_08_16F718.c declares it returning void with (pointer, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_00278508;
extern int D_0027850C;
extern unsigned int func_01CD60(void *a, int b, void *c, int d, int e, int f, int g);
extern int func_2025D0(void *a);
extern void func_2025E8(void *a);

void func_16F680(void *a0)
{
    void *buf[16];
    unsigned int n;
    unsigned int i;
    void *h;

    n = func_01CD60(buf, 16, a0, -1, D_00278508, D_0027850C, 1);
    for (i = 0; i < n; i++) {
        h = buf[i];
        if (func_2025D0(h) != 0) {
            func_2025E8(h);
        }
    }
}
