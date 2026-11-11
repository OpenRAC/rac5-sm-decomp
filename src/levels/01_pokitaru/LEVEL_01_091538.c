/* LEVEL_01:0x091538 -- walks a node list, looks each key up in a sorted table and records the result by slot. */
typedef struct Ent { unsigned key; int slot; } Ent;
typedef struct Node { unsigned key; } Node;
extern unsigned D_00297DC0[];
extern unsigned func_0A32E8(Node *n);
extern Node *func_129DF8(Node *n);

void func_091538(Node *n, Ent *tbl)
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
                unsigned v = func_0A32E8(n);

                if (v != 0xFFFFFFFF)
                    D_00297DC0[slot] = v;
            }
            n = func_129DF8(n);
        } while (n);
    }
}
