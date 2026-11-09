/* LEVEL_01.REL:0x036ED0: reviewed 136-byte candidate, held for ABI review.
 * Walks the upper half of a halfword array, calling the partition helper per
 * step.
 * pinned C with gnu-ee-trial links 136/136 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer, pointer), but the
 * accepted caller LEVEL_01_036FF8.c declares it returning void with (pointer,
 * pointer, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_036E20(unsigned short *base, int index, int count, unsigned short value);

void func_036ED0(unsigned short *base, unsigned short *end)
{
    int count = end - base;
    int index;

    if (count < 2)
        return;
    index = (count - 2) / 2;
    while (1) {
        func_036E20(base, index, count, base[index]);
        if (index == 0)
            return;
        index--;
    }
}
