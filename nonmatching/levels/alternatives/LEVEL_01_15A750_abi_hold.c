/* LEVEL_01.REL:0x15A750: reviewed 100-byte candidate, held for ABI review.
 * Placement copy of LEVEL_01_15A750.c: runs a transform helper on the record's
 * sub-block, then calls a follow-up helper when the result is large enough.
 * pinned C with gnu-ee-trial links 100/100 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_013708 returning float with (int, int, int, int), but the
 * accepted LEVEL_01_013708.c defines it returning float with (pointer,
 * pointer, pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern float func_013708(int a0, int a1, int a2, int a3);
extern void func_15C260(char *a0, int a1, int a2);
extern char D_0021E9A4[];

void func_15A750(char *a0)
{
    int a1;
    float r;

    a1 = *(int *)(a0 + 0x54);
    r = func_013708((int)a0, a1 + 8, a1 + 0xC, (int)D_0021E9A4);
    if (0.9f <= r) {
        func_15C260(a0, *(unsigned char *)(a0 + 0x45), 6);
    }
}
