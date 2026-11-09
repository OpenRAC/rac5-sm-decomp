/* LEVEL_02.REL:0x15DBE0: reviewed 76-byte candidate, held for ABI review.
 * Resets the shared state, switches the object to mode 2 when the check
 * passes, then updates it.
 * pinned C with gnu-ee-trial links 76/76 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_041038 returning void with (int), but the accepted
 * LEVEL_02_041038.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_041038(int);
extern int func_0833A0(void *, int);
extern void func_15D640(void *, int);
extern void func_15F1A8(void *);

void func_15DBE0(void *obj)
{
    func_041038(0);
    if (func_0833A0(obj, 0))
        func_15D640(obj, 2);
    func_15F1A8(obj);
}
