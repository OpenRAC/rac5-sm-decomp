/* USA LEVEL_01.REL:0x096BE0, 116-byte candidate (14 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x74.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int w[10];
} Entry;

typedef struct {
    Entry ents[256];
    int count;
} Table;

extern Table D_002982CC;

int func_096BE0(int *key)
{
    Entry *e = D_002982CC.ents;
    Entry *end = e + D_002982CC.count;
    int off = 0;

    for (;;) {
        if (e == end) {
            return -1;
        }
        if (key[0] == e->w[0] && key[1] == e->w[1] && key[2] == e->w[2] && key[3] == e->w[3]) {
            return off >> 3;
        }
        off += 8;
        e++;
    }
}
