/* LEVEL_04.REL:0x14F6F8: reviewed 92-byte candidate.
 * When a flag byte is clear, derives a counter through two helpers and returns
 * the smaller of the stored and derived values.
 * pinned C with gnu-ee-trial links 92/92 bytes; first differs at +48 (4
 * words).
 * The counter field load is scheduled before the increment of the call result;
 * branch sense and call layout match.
 * Retry: Recover the statement order around the counter update.
 * No matching credit.
 */
struct Sub {
    char pad_00[0x1C];
    unsigned int w_1C;
    char pad_20[0x28 - 0x20];
    unsigned char b_28;
};

struct Obj {
    char pad_00[0x54];
    struct Sub *p_54;
};

int func_14FBF8(void *a0);
int func_027098(int a0, int a1);

unsigned int func_14F6F8(struct Obj *a0)
{
    struct Sub *s0;
    unsigned int v;
    unsigned int *pp;
    int r;

    s0 = a0->p_54;
    if (s0->b_28 != 0) {
        return 0;
    }
    r = func_14FBF8(a0);
    v = func_027098(r, 0xFF) + 1;
    pp = (s0->w_1C < v) ? &s0->w_1C : &v;
    return *pp;
}
