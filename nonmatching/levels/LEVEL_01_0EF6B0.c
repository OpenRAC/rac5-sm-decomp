/* LEVEL_01.REL:0x0EF6B0: reviewed 148-byte candidate, held for ABI review.
 * Stores a value and a table of four helper results into a record, then runs a
 * finishing helper.
 * pinned C with gnu-ee-trial links 148/148 bytes and is byte-exact at this and
 * 16 other USA placements, but the prototypes disagree.
 * It declares func_09FB18 returning int with (pointer, int), but the accepted
 * LEVEL_01_09FB18.c defines it returning void with (pointer, int).
 * It declares func_0E6188 returning int with (int), but the accepted
 * LEVEL_01_0E6188.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Rec0EF6B0 {
    char pad_00[0x1C];
    int w_1C;
    int w_20;
    int w_24;
    int w_28;
    int w_2C;
};

int func_09FB18(struct Rec0EF6B0 *o, int a);
int func_0E6188(int a);
int func_0FCB00(int a);
int func_0F9AB8(int a);
int func_0FE850(int a);
void func_0EEF20(struct Rec0EF6B0 *o, int *c);

void func_0EF6B0(struct Rec0EF6B0 *o, int x, int *c, int y)
{
    func_09FB18(o, y);
    o->w_2C = x;
    o->w_1C = func_0E6188(c[0]);
    o->w_20 = func_0FCB00(c[1]);
    o->w_24 = func_0F9AB8(c[2]);
    if (c[3] != 0) {
        o->w_28 = func_0FE850(c[3]);
    } else {
        o->w_28 = -1;
    }
    func_0EEF20(o, c);
}
