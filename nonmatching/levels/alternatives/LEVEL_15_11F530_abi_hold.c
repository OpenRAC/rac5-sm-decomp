/* LEVEL_15.REL:0x11F530: reviewed 64-byte candidate, held for ABI review.
 * Calls a helper with a sub-record and conditionally calls a second helper.
 * pinned C with gnu-ee-trial links 64/64 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_12B488 returning void with (pointer, int), but the accepted
 * LEVEL_15_12B488.c defines it returning void with (pointer).
 * It declares func_115C28 returning void with (int), but the accepted
 * LEVEL_01_0F0980.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_12B488(char *, int);
extern void func_115C28(int);

void func_11F530(char *first, char *second)
{
    int flag;
    func_12B488(first + 0x88, *(int *)(second + 0x68));
    flag = *(int *)(first + 0x4c);
    if (flag != 0) func_115C28(flag);
}
