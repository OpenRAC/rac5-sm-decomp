/* LEVEL_01.REL:0x031B80: reviewed 184-byte candidate, held for ABI review.
 * Validates two optional checks, then tests a vector against a limit.
 * pinned C with gnu-ee-trial links 184/184 bytes and is byte-exact at this and
 * 7 other USA placements, but the prototypes disagree.
 * It declares func_014058 returning int with (pointer, float, int, int), but
 * the accepted LEVEL_01_014058.c defines it returning void with (int, int,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_084708(void *a0);
extern int func_1C4940(void *a0, void *a1);
extern int func_014058(void *a0, float f, int a1, int a2);

int func_031B80(unsigned char *o, float *v)
{
    float vec[4];
    int r;

    if (*(void **)(o + 0x10) != 0) {
        if (func_084708(*(void **)(o + 0x10)) == 0) {
            return 3;
        }
    }
    if (*(void **)(o + 0x18) != 0) {
        r = func_1C4940(*(void **)(o + 0x18), v);
        if (r != 0) {
            return 2;
        }
    }
    vec[0] = v[0];
    vec[1] = v[1];
    vec[2] = v[2];
    vec[3] = v[3];
    if (o[0x29] == 0) {
        r = func_014058(vec, 0.75f, 0, 1);
        if (r == 0) {
            return 1;
        }
    }
    return 0;
}
