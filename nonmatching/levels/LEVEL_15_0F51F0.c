/* LEVEL_15.REL:0x0F51F0: reviewed 116-byte candidate, held for ABI review.
 * When the selected record is not in a special state, clears a counter, then
 * passes a field of that record to a helper.
 * pinned C with gnu-ee-trial links 116/116 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_0003B8 returning int with (int), but the accepted
 * LEVEL_15_0003B8.c defines it returning void with (int).
 * It declares func_128888 returning void with (int, pointer), but the accepted
 * LEVEL_15_128888.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_0003B8(int a0);
void func_128888(int a0, void *a1);
extern unsigned char D_002A8B58[];

struct Inner {
    unsigned char pad00[0x24];
    int w24;
    int w28;
};

struct Ctx {
    unsigned char pad0000[0x4040];
    int w4040;
    unsigned char pad4044[0x416C - 0x4044];
    struct Inner *p416C;
};

void func_0F51F0(void *a0)
{
    unsigned char *base;
    struct Ctx *s0;
    int w;

    base = D_002A8B58;
    s0 = (struct Ctx *)(base + 0x40000);
    w = s0->p416C->w24;
    if (w == 28) {
        return;
    }
    if (func_0003B8(w) != 0) {
        return;
    }
    s0->w4040 = 1;
    func_128888(s0->p416C->w28, a0);
}
