/* LEVEL_02.REL:0x160770: reviewed 144-byte candidate, held for ABI review.
 * Sets a flag bit in an object word, runs four helpers, then toggles a
 * halfword bit.
 * pinned C with gnu-ee-trial links 144/144 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_040EA8 returning void with (int), but the accepted
 * LEVEL_02_040EA8.c defines it returning void with (pointer).
 * It declares func_040DB0 returning void with (int), but the accepted
 * LEVEL_02_040DB0.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Obj160770 {
    char pad_00[0x58];
    char *p_58;
    char pad_5C[0x8];
    int w_64;
};

void func_040EA8(int flag);
void func_040DB0(int flag);
void func_041038(int flag);
void func_041090(int flag);

void func_160770(struct Obj160770 *o, int flag)
{
    char *sub;
    unsigned short *h;

    o->w_64 = (o->w_64 & ~0x1000) | (((flag ^ 1) & 1) << 12);
    sub = o->p_58;
    func_040EA8(flag);
    func_040DB0(flag);
    func_041038(flag);
    func_041090(flag);
    if (flag != 0) {
        h = (unsigned short *)(sub + 0xB4);
        h[6] &= 0xEFFF;
    } else {
        h = (unsigned short *)(sub + 0xB4);
        h[6] |= 0x1000;
    }
}
