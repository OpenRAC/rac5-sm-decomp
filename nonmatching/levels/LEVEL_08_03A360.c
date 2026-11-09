/* LEVEL_08.REL:0x03A360: reviewed 68-byte candidate, held for ABI review.
 * Runs the update, then picks one of two handlers for event 7 from a global
 * flag.
 * pinned C with gnu-ee-trial links 68/68 bytes and is byte-exact at this and 2
 * other USA placements, but the prototypes disagree.
 * It declares func_0AB228 returning int with (int), but the accepted
 * LEVEL_08_0AB228.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char D_0023D496;
extern void func_0392C8(void);
extern void func_0AB208(int);
extern void func_0AB228(int);

void func_03A360(void)
{
    func_0392C8();
    if (D_0023D496)
        func_0AB208(7);
    else
        func_0AB228(7);
}
