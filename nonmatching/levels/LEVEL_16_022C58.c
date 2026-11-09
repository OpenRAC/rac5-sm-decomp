/* LEVEL_16.REL:0x022C58: reviewed 164-byte candidate, held for ABI review.
 * Walks a four-by-twenty-five grid, calling helpers per cell and copying one
 * word from a helper result into the cell found.
 * pinned C with gnu-ee-trial links 164/164 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_021F50 returning int with (int, int), but the accepted
 * LEVEL_16_021F50.c defines it returning pointer with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Cell {
    unsigned char pad00[0x40];
    int w40;
};

struct Src {
    unsigned char pad00[0x38];
    int w38;
};

struct Cell *func_0220C8(int a0, int a1);
int func_021F50(int a0, int a1);
struct Src *func_022110(int a0, int a1);

void func_022C58(void)
{
    unsigned int i;
    unsigned int j;
    struct Cell *c;
    struct Src *s;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 25; j++) {
            c = func_0220C8(j, i);
            if (c != 0) {
                if (func_021F50(j, -1) != 0) {
                    s = func_022110(j, i);
                    if (s != 0) {
                        c->w40 = s->w38;
                    }
                }
            }
        }
    }
}
