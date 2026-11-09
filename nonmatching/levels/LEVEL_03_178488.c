/* LEVEL_03.REL:0x178488: reviewed 104-byte candidate, held for ABI review.
 * Converts six table records through a helper and stores the results in a
 * parallel table.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this and
 * 7 other USA placements, but the prototypes disagree.
 * It declares func_1282D0 returning int with (int), but the accepted
 * LEVEL_03_1282D0.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    int f_00;
    char pad_04[0x10];
} Elem;

extern Elem D_0023B108[];
extern int D_003B0D78[];
extern int func_1282D0(int a0);

void func_178488(void)
{
    int i;

    for (i = 0; i != 6; i++) {
        D_003B0D78[i] = func_1282D0(D_0023B108[i].f_00);
    }
}
