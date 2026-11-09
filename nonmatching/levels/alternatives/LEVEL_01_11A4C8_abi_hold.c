/* LEVEL_01.REL:0x11A4C8: reviewed 188-byte candidate, held for ABI review.
 * Placement copy of LEVEL_02_120810.c.
 * pinned C with gnu-ee-trial links 188/188 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_029688 returning int with (int, pointer), but the accepted
 * FRONTEND_0025E0.c defines it returning int with (pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct PoolEntry {
    int first;
    int second;
    unsigned int id;
};

extern struct PoolEntry D_00206DB0[];
extern int func_029688(int a, int *out);

void func_11A4C8(void)
{
    int index;
    int a;
    int b;

    for (index = 0; index < 16; index++) {
        if (D_00206DB0[index].second == 1) {
            if (func_029688(D_00206DB0[index].first - 1, &a) != 1) {
                D_00206DB0[index].second = 3;
                D_00206DB0[index].first = a + 1;
            }
        } else if (D_00206DB0[index].second == 2) {
            if (func_029688(D_00206DB0[index].first - 1, &b) != 1) {
                D_00206DB0[index].second = 3;
            }
        }
    }
}
