/* USA LEVEL_01.REL:0x0B9728, 216-byte candidate (21 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x54.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Slot0B9728 {
    char pad0[0xCC];
    unsigned char w_cc;
    unsigned char w_cd;
};

struct Ring0B9728 {
    struct Slot0B9728 **items;
    int count;
    int index;
};

extern int func_0B6020(int index);

int func_0B9728(struct Ring0B9728 *r, int flags)
{
    int found;
    int cur;
    int start;
    int step;
    struct Slot0B9728 *s;

    found = 0;
    cur = r->index;
    if ((flags & 0x50) || r->items[cur]->w_cc == 0) {
        step = 1;
        if (flags & 0x10) {
            step = -1;
        }
        start = cur;
        do {
            cur += step;
            if (cur < 0) {
                cur = r->count - 1;
            }
            if ((unsigned int)cur >= (unsigned int)r->count) {
                cur = 0;
            }
            s = r->items[cur];
            if (s->w_cc) {
                if (s->w_cd) {
                    found = 1;
                }
            }
        } while (cur != start && !found);
    }
    r->index = found ? cur : r->index;
    if (found) {
        func_0B6020(8);
    }
    return found;
}
