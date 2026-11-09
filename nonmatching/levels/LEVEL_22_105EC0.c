/* LEVEL_22.REL:0x105EC0: reviewed 160-byte candidate, held for ABI review.
 * Decodes a two-word state pair, then returns a 2-bit field.
 * pinned C with gnu-ee-trial links 160/160 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It defines the function returning int with (int, int), but the accepted
 * caller LEVEL_22_105B20.c declares it returning int with (int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_105800(int *a, int *b);
int func_021D98(int a0, int a1);

int func_105EC0(int a0, int a1)
{
    int x0;
    int x1;
    int s0;
    int s1;

    s1 = 0x47;
    x0 = a0;
    x1 = a1;
    if (func_105800(&x0, &x1) == 0) {
        return 0;
    }
    if (x1 == 6 || x1 == 0x17) {
        s1 = 0x49;
    }
    s0 = x0;
    s0 = s0 % 4;
    s0 = s0 * 2;
    return func_021D98(s1, (3 << s0) & 0xFF) >> s0;
}
