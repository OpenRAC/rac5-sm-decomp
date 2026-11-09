/* LEVEL_04.REL:0x177350: reviewed 168-byte candidate, held for ABI review.
 * Looks up a 0x1C-byte record by an object index, calls a helper with its
 * vector, retrying with a fallback vector when the first call fails.
 * pinned C with gnu-ee-trial links 168/168 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It defines the function returning int with (pointer), but the accepted
 * caller LEVEL_04_177640.c declares it returning pointer with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_003B05D0[];
extern char *D_00221E2C;
extern int func_19AEE8(char *a, char *b, float c, float d, float e);

int func_177350(char *o)
{
    char *s2;
    float *t;
    int r;

    s2 = D_00221E2C;
    t = (float *)(D_003B05D0 + (unsigned char)o[0x45] * 0x1C);
    r = func_19AEE8(s2, o, t[0], t[1], t[2]);
    if (r == 0) {
        r = func_19AEE8(s2, o, 1.0000000150474662e+30f, -1.0f, t[2]);
        if (r == 0) {
            return 0;
        }
    }
    return r;
}
