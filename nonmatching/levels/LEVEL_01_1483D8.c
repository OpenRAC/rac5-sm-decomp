/* LEVEL_01.REL:0x1483D8: reviewed 340-byte candidate, held for ABI review.
 * Switches an object into one of two modes, updating its state record and a
 * status byte.
 * pinned C with gnu-ee-trial links 340/340 bytes and is byte-exact at this and
 * 16 other USA placements, but the prototypes disagree.
 * It declares func_024628 returning pointer with (int, int), but the accepted
 * LEVEL_01_024628.c defines it returning int with (int, int).
 * It declares func_024EA0 returning int with (int, int), but the accepted
 * LEVEL_01_024EA0.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_0021A7F0;
extern unsigned char D_00230F30[];
extern float D_0021CB08[];

extern char *func_024628(int a0, int a1);
extern int func_024EA0(int a0, int a1);
extern void func_148670(void *a0, int a1);
extern void func_12C150(void *a0, void *a1, void *a2, int a3);

void func_1483D8(char *a0, char a1, char a2)
{
    char *s1;
    char *s2;
    char *p;
    int idx;

    s2 = *(char **)(a0 + 0x58);
    s1 = *(char **)s2;
    p = func_024628(2, *(int *)(s1 + 0xF8));
    *(int *)(p + 0x40) = *(int *)(p + 0x40) - 1;
    idx = 0;
    if (func_024EA0(2, *(int *)(s1 + 0xF8)) != 0) {
        idx = 1;
    }
    *(float *)(s2 + 4) = D_0021CB08[idx];
    if (a1 == 1 && *(int *)(s2 + 0xC) != 0) {
        func_148670(*(void **)(s2 + 0xC), a2);
        *(float *)(s2 + 0xB4) = 0.0f;
        a0[0x45] = 6;
    } else {
        func_12C150(a0, s2 + 8, s2 + 0x68, a2);
        *(float *)(s2 + 0xB4) = 0.03333333507180214f;
        s2[0xB9] = 0;
        a0[0x45] = 4;
    }
    if (D_0021A7F0 == 7 && (D_00230F30[0xD] >= 1 && D_00230F30[0xD] <= 0x3F)) {
        D_00230F30[0xD] = 0x80;
    } else if (D_0021A7F0 == 9 && (D_00230F30[0xD] >= 1 && D_00230F30[0xD] <= 0x3F)) {
        D_00230F30[0xD] = 0x80;
    }
}
