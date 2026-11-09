/* LEVEL_01.REL:0x0A7570: reviewed 84-byte candidate, held for ABI review.
 * Calls four helpers in order, passing one global pointer pair.
 * pinned C with gnu-ee-trial links 84/84 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0A6CE8 returning int with no arguments, but the accepted
 * LEVEL_01_0A6CE8.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_0A7318(void);
extern void func_0A7250(void *, long long);
extern int func_0A6CE8(void);
extern void func_0A66D0(void *, void *);
extern void *D_001F68E0;
extern void *D_001F68E4;

void func_0A7570(long long value)
{
    func_0A7318();
    func_0A7250(D_001F68E0, value);
    func_0A6CE8();
    func_0A66D0(D_001F68E0, D_001F68E4);
}
