/* LEVEL_01.REL:0x0EFB00: reviewed 76-byte candidate, held for ABI review.
 * Resets the object's two sub records and, when asked, the third one at 0xCC.
 * pinned C with gnu-ee-trial links 76/76 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_0FF1F0 returning void with (pointer), but the accepted
 * FRONTEND_001E08.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_0FF1F0(void *p);
extern void func_0FF1F8(void *p);
extern void func_0FDE28(void *p);

void func_0EFB00(char *obj, int all)
{
    func_0FF1F0(obj + 0xB0);
    func_0FF1F8(obj + 0x7C);
    if (all)
        func_0FDE28(obj + 0xCC);
}
