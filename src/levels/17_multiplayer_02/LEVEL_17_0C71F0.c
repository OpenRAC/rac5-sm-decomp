/* LEVEL_17:0x0C71F0 -- placement copy of LEVEL_01_0D85B8.c: moves a list cursor to the next active entry, wrapping around, and triggers the move effect. */
typedef struct {
    unsigned char f0;
    char pad1[0x1B];
} Entry;
typedef struct {
    Entry *items;
    unsigned int count;
    char pad8[4];
    int cur;
    int sel;
    char pad14[0x4C - 0x14];
    int fx;
} List;
extern int func_0A4590(int a);

int func_0C71F0(List *m, int flags)
{
    int found = 0;
    int dir = 0;
    int cur = m->cur;

    if ((flags & 0x50) != 0 || m->items[cur].f0 == 0) {
        dir = (flags & 0x10) ? -1 : 1;
        do {
            cur += dir;
            if (cur <= -1)
                cur = m->count - 1;
            if ((unsigned int)cur >= m->count)
                cur = 0;
            if (m->items[cur].f0 != 0)
                found = 1;
        } while (cur != m->cur && found == 0);
    }
    if (found != 0) {
        if (m->count >= 2) {
            m->fx = dir < 0 ? 3 : 2;
            func_0A4590(8);
        }
        m->sel = cur;
    }
    return found;
}
