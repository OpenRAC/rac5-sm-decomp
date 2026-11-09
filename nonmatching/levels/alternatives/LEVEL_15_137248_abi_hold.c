/* LEVEL_15.REL:0x137248: reviewed 64-byte candidate, held for ABI review.
 * Adds a delta to a global counter capped at 20 and passes it to a helper.
 * pinned C with gnu-ee-trial links 64/64 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_0977D8 returning void with (int), but the accepted
 * LEVEL_15_0977D8.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct G { char pad[0x1FC]; int count; };
extern struct G D_002F4F88;
extern void func_0977D8(int);

void func_137248(int delta)
{
    int next = D_002F4F88.count + delta;
    int value = 20;
    if (next <= 19)
        value = next;
    D_002F4F88.count = value;
    func_0977D8(value);
}
