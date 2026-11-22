/* USA LEVEL_10.REL:0x1E0170, 204-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 24 differing words; first difference at 0x6C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Step {
    float key;
    float val;
} Step;

extern Step D_00234040[];

int func_1E0170(float scale, unsigned int total, int n, int d)
{
    float x;
    float t;
    Step *p;
    Step *end;

    x = (float)n * scale / (float)d;
    t = (float)total / (float)d;
    end = D_00234040 + 4;
    for (p = end - 4; p != end; p++) {
        if (p->key <= t) {
            break;
        }
    }
    return (int)(p->val * x);
}
