/* USA LEVEL_15:1138B0, 116-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Byte-exact in an isolated link, but held for a local prototype conflict; no matching credit.
 * Remaining issue: earlier draft still exact; callee prototypes agree with accepted
 * LEVEL_15_020EB8.c (float(void)) and LEVEL_15_110C28.c (void(Obj *, float *)); no conflict
 * found
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_15:0x1138B0 -- while the object's timer float is not positive, advances it by a random fraction of the controller's step and runs the follow-up pass. */
typedef struct {
    char pad0[0x78];
    float f78;
} Ctl;

typedef struct {
    char pad0[8];
    float f8;
    char padC[0x254 - 0xC];
    Ctl *ctl;
} Obj;

extern float D_002ECBA8[];
extern float func_020EB8(void);
extern void func_110C28(Obj *o, float *target);

void func_1138B0(Obj *o)
{
    Ctl *c = o->ctl;

    if (o->f8 <= 0.0f) {
        float *t = D_002ECBA8;

        o->f8 = o->f8 + c->f78 * func_020EB8();
        func_110C28(o, t);
    }
}
