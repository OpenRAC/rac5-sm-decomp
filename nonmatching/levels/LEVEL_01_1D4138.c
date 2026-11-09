/* LEVEL_01.REL:0x1D4138: reviewed 76-byte candidate, held for ABI review.
 * Registers the level-tagged resource and keeps the returned handle.
 * pinned C with gnu-ee-trial links 76/76 bytes and is byte-exact at this and
 * 12 other USA placements, but the prototypes disagree.
 * It declares func_1D1638 returning int with (int, pointer, pointer, int), but
 * the accepted LEVEL_01_1D1638.c defines it returning void with (long long,
 * long long, long long, long long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned int D_00297FA4;
extern char D_00209238[];
extern char D_00209258[];
extern int D_002091C4;
extern int func_1D1638(unsigned int id, void *a, void *b, int c);

void func_1D4138(void)
{
    D_002091C4 = func_1D1638((D_00297FA4 << 16) | 0x800030D9, D_00209238, D_00209258, 0);
}
