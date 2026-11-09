/* LEVEL_01.REL:0x082CD8: reviewed 108-byte candidate, held for ABI review.
 * Latches a one-time result word into a global, then stores it through the
 * second argument when a status check passes.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_12A068 returning int with (int), but the accepted
 * LEVEL_01_12A068.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char D_001F6200;
extern int D_001F61FC;

int func_12A068(int a0);
int func_0A2A00(void);

void func_082CD8(int a0, int *a1)
{
    if (D_001F6200 == 0) {
        D_001F6200 = 1;
        D_001F61FC = func_12A068(0x26215A62);
    }
    if ((func_0A2A00() & 7) == 1) {
        *a1 = D_001F61FC;
    }
}
