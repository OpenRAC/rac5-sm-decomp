/* USA LEVEL_08.REL:0x20FD90, 188-byte candidate (14 November 2026).
 * Measured pinned: 17 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
/* LEVEL_08:0x20FD90 -- runs the setup helper, then walks the table of 12-byte range entries and renders every non-empty range, finishing with the cleanup helper. */
typedef struct Item {
    char pad[0x90];
} Item;

typedef struct Range {
    int w0;
    Item *start;
    Item *end;
} Range;

extern void func_03A160(void *a0, void *a1, void *a2, Range *table, int count);
extern void func_03A3A8(void *a0, int n, void *a2, void *a3, int w0, void *t1);
extern void func_03A360(void *a0, void *a1);

void func_20FD90(void *a0, void *a1, void *a2, Range *table, int count)
{
    Range *r;
    Range *end;
    int n;

    func_03A160(a0, a1, a2, table, count);
    r = table;
    end = r + count;
    for (; r != end; r++) {
        n = r->end - r->start;
        if (n > 0) {
            func_03A3A8(r->start, n, a0, a1, r->w0, a2);
        }
    }
    func_03A360(a0, a1);
}
