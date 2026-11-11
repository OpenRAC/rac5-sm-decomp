/* LEVEL_23:0x086F58 -- placement copy of LEVEL_01_091538.c: walks a node list, looks each key up in a sorted table and records the result by slot. */
typedef struct Ent { unsigned key; int slot; } Ent;
typedef struct Node { unsigned key; } Node;
extern unsigned D_00269200[];
extern unsigned func_09A028(Node *n);
extern Node *func_11AC70(Node *n);

void func_086F58(Node *n, Ent *tbl)
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
                unsigned v = func_09A028(n);

                if (v != 0xFFFFFFFF)
                    D_00269200[slot] = v;
            }
            n = func_11AC70(n);
        } while (n);
    }
}
