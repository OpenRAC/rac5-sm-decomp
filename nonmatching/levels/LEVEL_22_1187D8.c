/* LEVEL_22.REL:0x1187D8: reviewed 108-byte candidate, held for ABI review.
 * Rebuilds a flag word with fixed bit patterns, runs two helpers on a stack
 * buffer, and stores the second result.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It declares func_087718 returning int with (pointer, int, pointer, int, int,
 * int, int), but the accepted LEVEL_22_087718.c defines it returning void with
 * (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_087718(void *a0, unsigned int a1, void *a2, int a3, int a4, int a5, int a6);
extern int func_0878F0(void *a0);
extern char D_00119048[];

void func_1187D8(int *a0, unsigned int a1)
{
    int buf[4];
    unsigned int m;

    m = (a1 & 0xFFFFFFC3) | 0x18;
    m = (m & 0xFFFFFFFC) | 1;
    func_087718(buf, m, D_00119048, 0x40, 0, -1, 0);
    *a0 = func_0878F0(buf);
}
