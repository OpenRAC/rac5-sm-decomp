/* LEVEL_01.REL:0x1AB860: reviewed 304-byte candidate, held for ABI review.
 * Starts a timed state on the object, notifies a helper pair and adjusts a
 * status byte.
 * pinned C with gnu-ee-trial links 304/304 bytes and is byte-exact at this and
 * 15 other USA placements, but the prototypes disagree.
 * It declares func_024628 returning pointer with (int, int), but the accepted
 * LEVEL_01_024628.c defines it returning int with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_0021A7F0;
extern unsigned char D_00230F30[];
extern char *D_00208CF4;

extern char *func_024628(int a0, int a1);
extern void func_07CD28(void *o, int a1, int a2, int a3, float f12, float f13);
extern void func_0809D0(void *a0, void *a1, int a2, int a3, int t0, int t1, int t2, int t3,
                        float f12, float f13, float f14, float f15);

void func_1AB860(char *a0)
{
    char *s0;
    char *s1;
    char *g;

    s0 = *(char **)(a0 + 0x58);
    s1 = func_024628(8, *(int *)(*(char **)s0 + 0xF8));
    *(float *)(s0 + 0x10) = 60.0f;
    *(int *)(s0 + 0x14) = 3;
    func_07CD28(a0, 3, 0, 1, 0.1f, 0.0f);
    a0[0x45] = 8;
    *(int *)(s1 + 0x40) = *(int *)(s1 + 0x40) - 1;
    g = D_00208CF4;
    if (g != 0) {
        func_0809D0(a0, g, 0, 0, 0, 0, 0, 1, ((float *)g)[5], ((float *)g)[6], ((float *)g)[7], ((float *)g)[8]);
    }
    if (D_0021A7F0 == 7 && (D_00230F30[0xD] >= 1 && D_00230F30[0xD] <= 0x3F)) {
        D_00230F30[0xD] = 0x80;
    } else if (D_0021A7F0 == 9 && (D_00230F30[0xD] >= 1 && D_00230F30[0xD] <= 0x3F)) {
        D_00230F30[0xD] = 0x80;
    }
}
