/* LEVEL_16.REL:0x139910: reviewed 116-byte candidate, held for ABI review.
 * Resolves a record through a helper, then tests two sub-records with a second
 * helper and reports whether both checks pass.
 * pinned C with gnu-ee-trial links 116/116 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_13A010 returning int with (int, pointer), but the accepted
 * LEVEL_16_13A010.c defines it returning void with (pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Mid {
    char pad_00[0x5C];
    int w_5C;
};

struct Sub {
    char pad_00[0x10];
    int w_10;
    char pad_14[0x34 - 0x14];
    int w_34;
};

struct Obj {
    char pad_00[0x54];
    struct Sub *p_54;
    struct Mid *p_58;
};

int func_13A010(int a0, char *a1);
int func_0763F8(int a0, char *a1);

int func_139910(struct Obj *a0)
{
    struct Sub *s0;
    char loc[16];
    int r;

    r = 0;
    s0 = a0->p_54;
    func_13A010(a0->p_58->w_5C, loc);
    if (func_0763F8(s0->w_10, loc) != 0) {
        if (s0->w_34 == 0 || func_0763F8(s0->w_34, loc) == 0) {
            r = 1;
        }
    }
    return r;
}
