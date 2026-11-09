/* LEVEL_04.REL:0x1E7080: reviewed 184-byte candidate, held for ABI review.
 * Resets a timer state when the input is non-negative and the state is armed.
 * pinned C with gnu-ee-trial links 184/184 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_083F98 returning void with (int), but the accepted
 * LEVEL_04_083F98.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_083F98(unsigned int a0);
extern int func_083E30(unsigned char *a0, unsigned char *a1, float f0, float f1, float f2, float f3, int i2, int i3, int i4, int i5, int i6, int i7);
extern unsigned char *D_003AFF58;

int func_1E7080(unsigned char *o, unsigned char *a1, float x)
{
    unsigned char *g;

    if (x < 0.0f) {
        return 0;
    }
    if (o[0x28] == 1) {
        *(float *)(o + 0x24) = 1.0f;
        o[0x28] = 2;
        if (*(unsigned int *)(o + 0x20) != 0) {
            func_083F98(*(unsigned int *)(o + 0x20));
            *(unsigned int *)(o + 0x20) = 0;
        }
        g = D_003AFF58;
        if (g != 0) {
            func_083E30(a1, g, *(float *)(g + 0x14), *(float *)(g + 0x18), *(float *)(g + 0x1C), *(float *)(g + 0x20), 0, 0, 0, 0, 0, 1);
        }
        return 1;
    }
    return 0;
}
