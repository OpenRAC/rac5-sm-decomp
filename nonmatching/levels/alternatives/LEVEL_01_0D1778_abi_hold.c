/* LEVEL_01.REL:0x0D1778: reviewed 100-byte candidate, held for ABI review.
 * Picks one of three record fields by a mode word.
 * pinned C with gnu-ee-trial links 100/100 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0D9220 returning pointer with (pointer), but the accepted
 * LEVEL_01_0D9220.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Block_0032CB18 { char pad[0x14]; int mode; };
extern struct Block_0032CB18 D_0032CB18;
extern char *func_0D9220(char *);
int func_0D1778(void)
{
    char *record = func_0D9220((char *)&D_0032CB18);
    int mode = D_0032CB18.mode;
    if (mode == 1) goto l1;
    if (mode == 0) goto l0;
    if (mode == 2) goto l2;
    return 0;
l1: return *(int *)(record + 0x2c);
l0: return *(int *)(record + 0x28);
l2: return *(int *)(record + 0x30);
}
