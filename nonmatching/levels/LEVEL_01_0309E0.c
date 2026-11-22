/* USA LEVEL_01.REL:0x0309E0 (21 November 2026): exact linked bytes under gnu-
 * ee-trial, held.
 * Its form stays out of the accepted set because a placement disagrees with an
 * accepted prototype.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern int func_084708(void *a0);
extern int func_1C4940(void *a0, void *a1);
extern int func_014058(void *a0, float f, int a1, int a2);

int func_0309E0(unsigned char *o, float *v, int check, float f)
{
    float vec[4];
    int r;

    if (*(void **)(o + 0x10) != 0) {
        if (func_084708(*(void **)(o + 0x10)) == 0) {
            return 0;
        }
    }
    if (*(void **)(o + 0x18) != 0) {
        r = func_1C4940(*(void **)(o + 0x18), v);
        if (r != 0) {
            return 0;
        }
    }
    r = 0;
    vec[0] = v[0];
    vec[1] = v[1];
    vec[2] = v[2];
    vec[3] = v[3];
    if (o[0x29] != 0 || check == 0 || func_014058(vec, f, 0, 1) != 0) {
        r = 1;
    }
    return r;
}
