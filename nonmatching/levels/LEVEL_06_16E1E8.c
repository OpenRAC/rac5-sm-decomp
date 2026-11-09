/* LEVEL_06.REL:0x16E1E8: reviewed 144-byte candidate, held for ABI review.
 * Picks a byte code from a sub-object flag, and a second routine stores a
 * helper result and clears two flag bits.
 * pinned C with gnu-ee-trial links 144/144 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_15BD78 returning int with (pointer, pointer, pointer,
 * float, float), but the accepted LEVEL_01_16CDE8.c defines it returning int
 * with (pointer, pointer, int, float, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Obj16E1E8 {
    char pad_00[0x54];
    char *p_54;
    char *p_58;
    char pad_5C[0x8];
    int w_64;
};

unsigned char func_15BD78(char *a, struct Obj16E1E8 *b, char *c, float x, float y);

void func_16E1E8(struct Obj16E1E8 *o)
{
    char *s;
    char *q;

    s = o->p_54;
    q = o->p_58;
    if (*(int *)(s + 0x3C) != 0) {
        *(unsigned char *)(q + 0x90) = 9;
    } else {
        *(unsigned char *)(q + 0x90) = 10;
    }
}

void func_16E210(struct Obj16E1E8 *o)
{
    char *s;
    char *q;
    int w;

    s = o->p_54;
    q = o->p_58;
    *(unsigned char *)(q + 0x92) = func_15BD78(*(char **)(s + 0x2C), o, s, 0.75f, 1.0f);
    w = o->w_64;
    w &= ~0x20;
    w &= ~0x400;
    o->w_64 = w;
}
