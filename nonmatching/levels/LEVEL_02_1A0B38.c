/* USA LEVEL_02:1A0B38, 220-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 220 bytes: 3 differing words; first difference +0x5C. No matching credit.
 * Remaining issue: delay-slot/flag preset: logic corrected from retail (state 0 always calls
 * func_1A0C18; state = 1 when t < f or near && !out[0]), now 220 B with 3 words left: retail
 * presets the near flag v0 = 1 before the t < f branch (its delay slot) and clears it in a bc1fl
 * likely slot, ours sets it inside the near block (bc1t + li 1 / li 0); 8 helper and flag forms
 * tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_02:0x1A0B38 -- state step: in state 0 enters state 1 when the target is below the value read back (or equal within 1e-5 with the out byte clear) and runs the move; in state 1 runs the move to the target and, when it completes, enters state 2 and bumps the owner counter. */
extern float fabsf(float x);

typedef struct {
    char pad00[0x70];
    float count;
} Owner;

typedef struct {
    Owner *owner;
    float target;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Rec *rec;
} Obj;

extern float func_1A0F80(Obj *o, unsigned char *out);
extern int func_1A0C18(Obj *o, float f);

static __inline__ unsigned char Near(float a, float b)
{
    return fabsf(a - b) <= 9.999999747378752e-06f;
}

void func_1A0B38(Obj *o)
{
    unsigned char out[16];
    Rec *r = o->rec;
    float f;

    if (o->state == 0) {
        f = func_1A0F80(o, out);
        if (r->target < f || (Near(r->target, f) && out[0] == 0))
            o->state = 1;
        func_1A0C18(o, f);
    } else if (o->state == 1) {
        if (func_1A0C18(o, r->target) != 0) {
            o->state = 2;
            r->owner->count = r->owner->count + 1.0f;
        }
    }
}
