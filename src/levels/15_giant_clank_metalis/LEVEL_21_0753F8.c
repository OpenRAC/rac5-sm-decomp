/* LEVEL_21:0x0753F8 -- placement copy of LEVEL_01_091538.c: walks a node list, looks each key up in a sorted table and records the result by slot. */
typedef struct Ent { unsigned key; int slot; } Ent;
typedef struct Node { unsigned key; } Node;
extern unsigned D_001AFE00[];
extern unsigned func_083BE0(Node *n);
extern Node *func_0EDC78(Node *n);

void func_0753F8(Node *n, Ent *tbl)
{
    if (n) {
        do {
            unsigned key = n->key;
            Ent *lo = tbl;
            Ent *hi = tbl + 203;
            int slot;

            while (lo < hi) {
                Ent *mid = lo + (unsigned)(hi - lo) / 2;

                if (key < mid->key) {
                    hi = mid;
                } else if (mid->key < key) {
                    lo = mid + 1;
                } else {
                    slot = mid->slot;
                    goto found;
                }
            }
            slot = -1;
        found:
            if (slot != -1) {
                unsigned v = func_083BE0(n);

                if (v != 0xFFFFFFFF)
                    D_001AFE00[slot] = v;
            }
            n = func_0EDC78(n);
        } while (n);
    }
}
