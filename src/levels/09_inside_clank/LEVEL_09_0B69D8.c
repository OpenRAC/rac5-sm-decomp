/* LEVEL_09:0x0B69D8 -- placement copy of FRONTEND_012200.c: placement copy of LEVEL_01_0B9728.c: steps the selection index of a ring of entries to the next usable one and plays the move sound. */

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

extern int func_0B32D0(int index);

int func_0B69D8(struct Ring0B9728 *r, int flags)
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
        } while (cur != r->index && !found);
    }
    r->index = found ? cur : r->index;
    if (found) {
        func_0B32D0(8);
    }
    return found;
}
