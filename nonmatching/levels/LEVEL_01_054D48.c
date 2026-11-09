/* LEVEL_01.REL:0x054D48: reviewed 336-byte candidate, held for ABI review.
 * Picks the next object state from pad input and hold state, and arms a
 * follow-up action when the right button is pressed.
 * pinned C with gnu-ee-trial links 336/336 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_17CB10 returning int with (int), but the accepted
 * LEVEL_01_17CB10.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char *D_001F3FAC;

extern int func_06A8D0(char *o, unsigned int *pad);
extern int func_023B38(char *o);
extern int func_023B70(char *o);
extern int func_17CB10(int h);

static __inline__ void follow_054D48(char *a0, unsigned int a1, unsigned char ok)
{
    int s0;
    int h;

    if (ok == 0) {
        return;
    }
    s0 = func_023B38(a0);
    func_023B70(a0);
    if (s0 != 7) {
        return;
    }
    if (a1 & ((*(int *)(D_001F3FAC + 0x24) == 2) ? 0x2200 : 0x2000)) {
        h = *(int *)(a0 + 0x5A4);
        if (h != 0) {
            if (func_17CB10(h) != 0) {
                *(short *)(a0 + 0x102) = 0x25;
                *(unsigned char *)(a0 + 0x9CF) = 1;
            }
        }
    }
}

void func_054D48(char *a0, unsigned int a1, unsigned int a2)
{
    unsigned int pad;

    pad = a2;
    if (func_06A8D0(a0, &pad) != 0) {
        *(int *)(a0 + 0xC6C) = 9;
    } else if (a1 & 0x8000) {
        *(int *)(a0 + 0xC6C) = 5;
    } else {
        if (a1 & ((*(int *)(D_001F3FAC + 0x24) == 2) ? 0x4100 : 0x4000)) {
            *(int *)(a0 + 0xC6C) = 2;
            return;
        }
    }
    if (*(int *)(a0 + 0x5A4) == 0) {
        return;
    }
    follow_054D48(a0, a1, *(unsigned char *)(a0 + 0x9CD) != 0 && *(int *)(a0 + 0x9A0) != 1);
}
