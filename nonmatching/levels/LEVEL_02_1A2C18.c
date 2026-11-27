/* USA LEVEL_02:1A2C18, 248-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 232 bytes: 59 differing words; first difference +0x8. No matching credit.
 * Remaining issue: branch layout: retail materialises every relocation result as a 0/1 flag
 * through branches and tests it after the join (no jump threading), and re-creates the
 * D_0021BD54 high part per relocation; with ok = v != 0; if (ok) ok = 1; else ok = 0; and a
 * result-variable checked helper the flags survive (232 vs 248 B, was 216) but the plain helper
 * polarity (retail bnez to ok=1, fallthrough ok=0) and the shared high part in a3 still differ
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_02:0x1A2C18 -- relocates the offset fields of the object's record by the global base, failing when one is unset or invalid, then scales its rate; returns 1 on success. */
extern int D_0021BD54;

typedef struct {
    int w00;
    int w04;
    int w08;
    int w0C;
    char pad10[4];
    float rate;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Owner;

static __inline__ int RelocPlain(int *p)
{
    int v = *p;
    int ok = v != 0;

    if (ok) {
        ok = 1;
    } else {
        ok = 0;
    }
    *p = D_0021BD54 + v;
    return ok;
}

static __inline__ int RelocChecked(int *p)
{
    int v = *p;
    int ok;
    int t;

    if (v == 0) {
        ok = 0;
    } else {
        t = D_0021BD54 + v;
        if (*(int *)(t + 0x40) != 0) {
            *p = t;
            ok = 1;
        } else {
            *p = 0;
            ok = 0;
        }
    }
    return ok;
}

int func_1A2C18(Owner *o)
{
    Rec *r = o->rec;

    if (RelocPlain(&r->w00) != 0) {
        if (RelocPlain(&r->w04) != 0) {
            if (RelocChecked(&r->w08) != 0) {
                if (RelocChecked(&r->w0C) != 0) {
                    r->rate = r->rate * 0.03333333507180214f;
                    return 1;
                }
            }
        }
    }
    return 0;
}
