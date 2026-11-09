/* LEVEL_02.REL:0x162BC0: reviewed 180-byte candidate, held for ABI review.
 * Advances a state timer on a sub-record and latches a flag once it passes a
 * threshold.
 * pinned C with gnu-ee-trial links 180/180 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_01ACB0 returning int with no arguments, but the accepted
 * LEVEL_02_01ACB0.c defines it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_01ACB0(void);
int func_08B060(int a0, int a1);

void func_162BC0(char *a0)
{
    char *s0;
    int r;
    float f;

    s0 = *(char **)(a0 + 0x54);
    if (*(int *)(s0 + 0x10) == 0) {
        return;
    }
    if (*(unsigned char *)(s0 + 0x18) != 0) {
        r = func_01ACB0();
        if (func_08B060(*(int *)(s0 + 0x10), r) == 0) {
            *(unsigned char *)(s0 + 0x18) = 0;
            return;
        }
    }
    if (*(unsigned char *)(s0 + 0x18) == 0) {
        r = func_01ACB0();
        if (func_08B060(*(int *)(s0 + 0x10), r) != 0) {
            f = *(float *)(s0 + 0x14) + 1.0f;
            *(float *)(s0 + 0x14) = f;
            if (150.0f < f) {
                *(int *)(s0 + 0x14) = 0;
                *(unsigned char *)(s0 + 0x18) = 1;
            }
        }
    }
}
