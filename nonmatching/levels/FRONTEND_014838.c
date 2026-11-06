/* FRONTEND.REL:0x014838, bounded 168-byte candidate.
 * Isolated pinned C object: 152 bytes; first linked difference
 * at body byte +78. Not linked into the accepted gate or counted.
 * Reopen: The first 78 bytes match. Three differences remain: GCC allocates `high` in $7 and `found` in $8 where the retail does the reverse; the retail merges the inner return with the final epilogue while GCC emits two returns; and the retail's loop rotation is not reproduced. Reopen with a loop bound distinct from range->hi and a single exit.
 */
struct Table {
    int count;
    int pad1;
    int pad2;
    int entries;
    int ranges;
    int items;
};

struct Pair {
    int lo;
    int hi;
};

extern struct Table D_0012D718;

int func_014838(int first, int second, unsigned int threshold)
{
    struct Pair *pair;
    struct Pair *range;
    int low;
    int high;
    int found;
    int base;

    if (first >= D_0012D718.count - 1) {
        return 0;
    }
    pair = (struct Pair *)(first * 4 + D_0012D718.entries);
    second += pair->lo;
    if (second >= pair->hi) {
        return 0;
    }
    range = (struct Pair *)(second * 4 + D_0012D718.ranges);
    low = range->lo;
    high = range->hi;
    found = 0;
    if (low < high) {
        base = low * 8 + D_0012D718.items;
        while (*(unsigned int *)(base + 4) <= threshold) {
            found = base;
            low++;
            if (low >= high) {
                break;
            }
            base = found + 8;
        }
    }
    return found;
}
