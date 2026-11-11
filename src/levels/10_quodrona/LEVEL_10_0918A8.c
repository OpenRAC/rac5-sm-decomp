/* LEVEL_10:0x0918A8 -- placement copy of LEVEL_01_091538.c: walks a node list, looks each key up in a sorted table and records the result by slot. */
typedef struct Ent { unsigned key; int slot; } Ent;
typedef struct Node { unsigned key; } Node;
extern unsigned D_002A11C0[];
extern unsigned func_0A4400(Node *n);
extern Node *func_127C58(Node *n);

void func_0918A8(Node *n, Ent *tbl)
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
                unsigned v = func_0A4400(n);

                if (v != 0xFFFFFFFF)
                    D_002A11C0[slot] = v;
            }
            n = func_127C58(n);
        } while (n);
    }
}
