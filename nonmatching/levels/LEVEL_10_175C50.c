/* LEVEL_10.REL:0x175C50: reviewed 120-byte candidate, held for ABI review.
 * Calls a lookup for each of twelve table words and marks each returned record
 * with two float fields.
 * pinned C with gnu-ee-trial links 120/120 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_127EC8 returning pointer with (pointer), but the accepted
 * LEVEL_10_127EC8.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct R175C50 {
    char pad00[0x18];
    float f18;
    float f1C;
};

extern char D_0022A5C0[];
extern struct R175C50 *func_127EC8(void *a);

void func_175C50(void)
{
    unsigned int i;
    void **arr;
    struct R175C50 *r;
    float hi;
    float lo;

    hi = 100.0f;
    lo = 150.0f;
    arr = (void **)D_0022A5C0;
    for (i = 0; i < 12; i++) {
        r = func_127EC8(arr[i]);
        if (r != 0) {
            r->f18 = hi;
            r->f1C = lo;
        }
    }
}
