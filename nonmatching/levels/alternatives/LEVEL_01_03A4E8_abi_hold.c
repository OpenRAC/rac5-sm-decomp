/* LEVEL_01.REL:0x03A4E8: reviewed 188-byte candidate, held for ABI review.
 * Placement copy of LEVEL_02_03EF98.c.
 * pinned C with gnu-ee-trial links 188/188 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning void with (int, int, int), but the
 * accepted caller LEVEL_01_054430.c declares it returning void with (pointer,
 * int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_0020B498[];

extern void func_03A370(int a, int b, int c, int d);
extern void func_03A470(int a, int b);

void func_03A4E8(int p1, int p2, int p3)
{
    int v = *(int *)(p1 + (p2 << 2) + 0x5B8);

    if (v == 0) {
        func_03A370(p1, p2, D_0020B498[p2], p3);
    } else if (*(int *)(*(int *)(*(int *)(v + 0x40) + 4)
                        + *(unsigned char *)(v + 0x44) * 0x34 + 0x20) != p3) {
        func_03A470(p1, p2);
        func_03A370(p1, p2, D_0020B498[p2], p3);
    }
}
