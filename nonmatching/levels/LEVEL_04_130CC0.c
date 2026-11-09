/* LEVEL_04.REL:0x130CC0: reviewed 348-byte candidate, held for ABI review.
 * Multiplies two packed 3x3 float matrices into a 3x4-strided destination.
 * pinned C with gnu-ee-trial links 348/348 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It defines the function returning void with (pointer, pointer, pointer), but
 * the accepted caller LEVEL_04_06A758.c declares it returning void with (int,
 * pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_130CC0(float *d, float *a, float *b)
{
    float r00, r01, r02, r10, r11, r12, r20, r21, r22;

    r00 = a[0] * b[0] + a[1] * b[3] + a[2] * b[6];
    r01 = a[0] * b[1] + a[1] * b[4] + a[2] * b[7];
    r02 = a[0] * b[2] + a[1] * b[5] + a[2] * b[8];
    r10 = a[3] * b[0] + a[4] * b[3] + a[5] * b[6];
    r11 = a[3] * b[1] + a[4] * b[4] + a[5] * b[7];
    r12 = a[3] * b[2] + a[4] * b[5] + a[5] * b[8];
    r20 = a[6] * b[0] + a[7] * b[3] + a[8] * b[6];
    r21 = a[6] * b[1] + a[7] * b[4] + a[8] * b[7];
    r22 = a[6] * b[2] + a[7] * b[5] + a[8] * b[8];
    d[0] = r00;
    d[1] = r01;
    d[2] = r02;
    d[4] = r10;
    d[5] = r11;
    d[6] = r12;
    d[8] = r20;
    d[9] = r21;
    d[10] = r22;
}
