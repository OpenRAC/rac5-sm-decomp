/* USA LEVEL_15:103278, 116-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Byte-exact in an isolated link, but held for a local prototype conflict; no matching credit.
 * Remaining issue: earlier exact draft; callee retyped to the accepted func_100910(Obj *, float
 * *) and the table declared float[] as in LEVEL_15_113E08; table local inside the if keeps it in
 * s0 across func_020EB8 (accepted float(void)); no conflict
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_15:0x103278 -- when the countdown has run out, adds a random fraction of the owner's period to it and re-aims at the shared target point. */
struct Cfg {
    char pad00[0x38];
    float f38;
};

struct Obj {
    char pad00[8];
    float timer;
    char pad0C[0x230];
    struct Cfg *cfg;
};

extern float D_002ECBA8[];
extern float func_020EB8(void);
extern void func_100910(struct Obj *o, float *target);

void func_103278(struct Obj *o)
{
    struct Cfg *cfg;
    float *target;

    cfg = o->cfg;
    if (o->timer <= 0.0f) {
        target = D_002ECBA8;
        o->timer = o->timer + cfg->f38 * func_020EB8();
        func_100910(o, target);
    }
}
