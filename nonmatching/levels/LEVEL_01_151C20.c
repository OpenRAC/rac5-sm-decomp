/* LEVEL_01.REL:0x151C20: reviewed 80-byte candidate, held for ABI review.
 * Placement copy of LEVEL_02_158498.c.
 * pinned C with gnu-ee-trial links 80/80 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_02E5D8 returning void with (pointer, pointer, pointer, int,
 * int), but the accepted LEVEL_01_02E5D8.c defines it returning void with
 * (pointer, pointer, pointer, pointer, pointer, float, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
/* LEVEL_02.REL:0x158498 -- clears the first halfword of the object, mounts the
   two fixed sub-tables at 0x48 and sets the 60-second delay at 0x80. */
typedef struct {
    short w_00;
    char pad0[0x46];
    char f_48[1];
    char pad1[0x80 - 0x49];
    float f_80;
} Obj;

extern char D_00391DDC[];
extern char D_00391B38[];

void func_02E5D8(void *a0, void *a1, void *a2, int a3, int a4);

void func_151C20(Obj *a0, int a1, int a2)
{
    a0->w_00 = 0;
    func_02E5D8(a0->f_48, D_00391DDC, D_00391B38, a1, a2);
    a0->f_80 = 60.0f;
}
