/* LEVEL_16.REL:0x0CA618: reviewed 348-byte candidate, held for ABI review.
 * Per-frame update of the rumble/fade meter: waits out the delay, triggers the
 * alert effects, then moves the level by the step for its direction and clamps
 * it.
 * pinned C with gnu-ee-trial links 348/348 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_10FC58 returning int with (int), but the accepted
 * LEVEL_16_10FC58.c defines it returning int with no arguments.
 * It declares func_0CA788 returning void with (int), but the accepted
 * LEVEL_16_0CA788.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_001B46F8;
extern int D_001B46CC;
extern int D_001B46D0;
extern int D_001B46D4;
extern unsigned char D_001B46D8;
extern unsigned char D_001B46D9;
extern int D_001B46DC;
extern float D_001B46E0;
extern char *D_001E00A8;
extern int func_10F330(int id);
extern int func_0C73A0(int h);
extern int func_10FA78(int a);
extern int func_10FC58(int a);
extern void func_024F70(int a, int b, int c);
extern void func_0CA5B0(void);
extern void func_0CA788(int a);
extern void func_019DE0(void);

void func_0CA618(void)
{
    int *p;
    int v;

    if (D_001B46F8 != 0) {
        D_001B46F8--;
        return;
    }
    if (*(unsigned char *)(D_001E00A8 + 0x15148) == 0) {
        func_024F70(0x91, 1, 1);
    }
    if (D_001B46CC == 0) {
        D_001B46CC = func_10F330(0xA1D);
    }
    if (func_0C73A0(D_001B46CC) != 0 || (func_10FA78(0) != 0 && func_10FC58(0) != 0)) {
        func_0CA5B0();
        func_0CA788(3);
    }
    if (D_001B46D0 != 0) {
        D_001B46D0--;
    }
    p = &D_001B46D4;
    if (D_001B46D0 == 0) {
        v = *p - D_001B46D8;
    } else {
        v = *p + D_001B46D9;
    }
    *p = v;
    if (D_001B46DC < D_001B46D4) {
        D_001B46D4 = D_001B46DC;
    }
    if (D_001B46D4 < 0) {
        D_001B46D4 = 0;
    }
    if (D_001B46D4 != 0) {
        func_019DE0();
        D_001B46E0 = D_001B46E0 + 0.25f;
    }
}
