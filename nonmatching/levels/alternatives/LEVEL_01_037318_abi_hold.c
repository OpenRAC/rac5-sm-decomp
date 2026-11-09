/* LEVEL_01.REL:0x037318: reviewed 76-byte candidate, held for ABI review.
 * Calls a helper for each unsigned short from first up to end.
 * pinned C with gnu-ee-trial links 76/76 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning void with (pointer, pointer), but the
 * accepted caller LEVEL_01_037368.c declares it returning void with (pointer,
 * pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_037238(unsigned short *, unsigned short);

void func_037318(unsigned short *first, unsigned short *end)
{
    unsigned short value;
    while (first != end) {
        value = *first;
        func_037238(first, value);
        first++;
    }
}
