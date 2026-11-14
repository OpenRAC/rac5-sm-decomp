/* USA LEVEL_01.REL:0x0DA740, 168-byte candidate (14 November 2026).
 * Measured pinned: 19 differing words; first difference at 0x4C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
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

extern struct Table D_0032D600;

int func_0DA740(int first, int second, unsigned int threshold)
{
    struct Pair *pair;
    struct Pair *range;
    int low;
    int end;
    int found;
    int base;

    if (first >= D_0032D600.count - 1) {
        return 0;
    }
    pair = (struct Pair *)(first * 4 + D_0032D600.entries);
    second += pair->lo;
    if (second >= pair->hi) {
        return 0;
    }
    range = (struct Pair *)(second * 4 + D_0032D600.ranges);
    low = range->lo;
    end = range->hi;
    found = 0;
    if (low < range->hi) {
        base = low * 8 + D_0032D600.items;
        while (*(unsigned int *)(base + 4) <= threshold) {
            found = base;
            low++;
            if (low >= end) {
                break;
            }
            base = found + 8;
        }
    }
    return found;
}
