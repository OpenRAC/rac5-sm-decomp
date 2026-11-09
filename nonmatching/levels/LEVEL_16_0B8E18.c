/* LEVEL_16.REL:0x0B8E18: reviewed 76-byte candidate, held for ABI review.
 * Level start-up chain ending with event 0x59.
 * pinned C with gnu-ee-trial links 76/76 bytes and is byte-exact at this and 4
 * other USA placements, but the prototypes disagree.
 * It declares func_1165C8 returning int with (int), but the accepted
 * LEVEL_16_1165C8.c defines it returning pointer with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_001AF038[];
extern void func_0A94B0(void *);
extern void func_10FA78(int);
extern int func_0AC020(void);
extern int func_112CE8(int);
extern int func_1165C8(int);
extern void func_0AAE30(int, int);

void func_0B8E18(void)
{
    func_0A94B0(D_001AF038);
    func_10FA78(1);
    func_0AAE30(func_1165C8(func_112CE8(func_0AC020())), 0x59);
}
