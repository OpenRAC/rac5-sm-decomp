/* LEVEL_22:0x02D078 -- placement copy of LEVEL_01_037128.c: introsort loop over unsigned 16-bit values. */
typedef unsigned short u16;
extern void func_02CF48(u16 *a, u16 *b, u16 *c, u16 *d);
extern u16 *func_02CFF0(u16 *a, u16 *b, u16 v);

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

void func_02D078(u16 *first, u16 *last, u16 *unused, int depth)
{
    u16 *cut;

    while (last - first > 16) {
        if (depth == 0) {
            func_02CF48(first, last, last, 0);
            return;
        }
        --depth;
        cut = func_02CFF0(first, last, *med(first, first + (last - first) / 2, last - 1));
        func_02D078(cut, last, 0, depth);
        last = cut;
    }
}
