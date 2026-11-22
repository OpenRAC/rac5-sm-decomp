/* USA LEVEL_04.REL:0x1F4960, 276-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 2 differing words; first difference at 0x24.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sinf(float x);

typedef struct Wob {
    char pad_00[0xC];
    float rate_0C;
    float lift_10;
    float phase_14;
    float amp_18;
    float to_1C;
    float from_20;
} Wob;

typedef struct Rec {
    char pad_00[0x24];
    float h_24;
} Rec;

extern void func_12EF90(float f, char *buf, Wob *w);
extern Rec *func_08F140(int a);
extern void func_12EB30(Rec *r, char *buf, Rec *r2);

void func_1F4960(Wob *w, int frozen)
{
    char buf[16];
    float lift;
    float amp;
    float rate;
    float ph;
    Rec *r;

    rate = w->rate_0C;
    if (rate > 0.0f) {
        amp = w->amp_18 * rate;
        ph = (w->to_1C - w->from_20) * rate + w->from_20;
        if (frozen == 0) {
            ph = ph + w->phase_14;
            w->phase_14 = ph;
            if (ph > 3.1415927f)
                w->phase_14 = ph - 6.2831855f;
        }
        func_12EF90(amp * sinf(w->phase_14), buf, w);
        r = func_08F140(0);
        func_12EB30(r, buf, r);
    }
    lift = w->lift_10;
    if (lift > 0.0f) {
        r = func_08F140(0);
        r->h_24 += lift * 160.0f - lift * lift * 160.0f;
    }
}
