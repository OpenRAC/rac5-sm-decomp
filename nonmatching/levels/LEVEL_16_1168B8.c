/* LEVEL_16.REL:0x1168B8: reviewed 116-byte candidate, held for ABI review.
 * Calls two helpers per index for two indices and conditionally calls a third
 * with the index.
 * pinned C with gnu-ee-trial links 116/116 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_000CF0 returning void with (int, pointer, int), but the
 * accepted LEVEL_16_000CF0.c defines it returning void with (int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_00002C00;
extern char D_00116A60[];
extern void func_000BF0(int a0);
extern void *func_000D28(int a0);
extern void func_000CF0(int a0, void *a1, int a2);

void func_1168B8(void)
{
    unsigned int i;
    void *r;

    for (i = 0; i < 2; i++) {
        func_000BF0(i);
        r = func_000D28(0);
        if (r == D_00116A60) {
            func_000CF0(0, (char *)&D_00002C00, i);
        }
    }
}
