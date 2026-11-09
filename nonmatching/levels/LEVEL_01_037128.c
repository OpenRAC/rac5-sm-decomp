/* LEVEL_01.REL:0x037128: reviewed 272-byte candidate, held for ABI review.
 * Introsort loop over unsigned 16-bit values.
 * pinned C with gnu-ee-trial links 272/272 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_036FF8 returning void with (pointer, pointer, pointer,
 * pointer), but the accepted LEVEL_01_036FF8.c defines it returning void with
 * (pointer, pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef unsigned short u16;
extern void func_036FF8(u16 *a, u16 *b, u16 *c, u16 *d);
extern u16 *func_0370A0(u16 *a, u16 *b, u16 v);

static inline u16 *med(u16 *a, u16 *b, u16 *c)
{
    if (*a < *b) {
        if (*b < *c) {
            return b;
        } else if (*a < *c) {
            return c;
        } else {
            return a;
        }
    } else if (*a < *c) {
        return a;
    } else if (*b < *c) {
        return c;
    } else {
        return b;
    }
}

void func_037128(u16 *first, u16 *last, u16 *unused, int depth)
{
    u16 *cut;

    while (last - first > 16) {
        if (depth == 0) {
            func_036FF8(first, last, last, 0);
            return;
        }
        --depth;
        cut = func_0370A0(first, last, *med(first, first + (last - first) / 2, last - 1));
        func_037128(cut, last, 0, depth);
        last = cut;
    }
}
