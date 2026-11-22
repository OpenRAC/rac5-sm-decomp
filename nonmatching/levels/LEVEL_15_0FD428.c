/* USA LEVEL_15.REL:0x0FD428, 244-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 13 differing words; first difference at 0xC4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int rand(void);
extern float ceilf(float);

typedef struct {
    char pad00[0x24];
    float value;
    float weight;
    float rate;
    float period;
} Fx;

typedef struct {
    char pad00[0x34];
    float a0;
    float a1;
    float b0;
    float b1;
} Desc;

void func_0FD428(Fx *fx, Desc *d, float lo, float hi)
{
    float dx;
    float da;
    float db;
    float a0;
    float b0;
    float r;
    float t;

    dx = (hi - lo) * 4.656612873077393e-10f;
    a0 = d->a0;
    da = (d->a1 - a0) * 4.656612873077393e-10f;
    b0 = d->b0;
    db = (d->b1 - b0) * 4.656612873077393e-10f;
    r = (float)rand();
    db = db * r;
    da = da * r;
    dx = dx * r;
    b0 = b0 + db;
    a0 = a0 + da;
    lo = lo + dx;
    t = ceilf(b0 * a0 * 0.15915493667125702f) * 6.2831854820251465f;
    fx->value = lo;
    fx->weight = 1.0f;
    fx->period = t;
    fx->rate = b0 / t;
}
