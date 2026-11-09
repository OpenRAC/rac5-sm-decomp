/* LEVEL_10.REL:0x1733D0: reviewed 84-byte candidate, held for ABI review.
 * Stores two data addresses into a sub-record reached through the object, then
 * calls two helpers.
 * pinned C with gnu-ee-trial links 84/84 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_07D018 returning void with (pointer), but the accepted
 * LEVEL_01_07C9E8.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_00173310[];
extern char D_001733C8[];
extern void func_07D018(char *p);
extern void func_173428(char *p);

void func_1733D0(char *a0)
{
    char *a2;

    a2 = *(char **)a0;
    *(char **)(*(char **)(a2 + 0x48) + 0xDC) = D_00173310;
    *(char **)(*(char **)(a2 + 0x48) + 0xE0) = D_001733C8;
    func_07D018(a2);
    func_173428(a0);
}
