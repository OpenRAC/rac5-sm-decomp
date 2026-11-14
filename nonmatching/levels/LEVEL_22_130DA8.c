/* USA LEVEL_22.REL:0x130DA8, 160-byte candidate (14 November 2026).
 * Measured pinned: 3 differing words; first difference at 0x34.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[8];
    float *list;
    char pad0C[0x14 - 0x0C];
    unsigned short count;
} Rec;

float func_130DA8(Rec *r, int n, float k)
{
    float sum;
    float *list;
    unsigned int count;
    unsigned int i;

    if (r == 0 || n < 0) {
        return 0.0f;
    }
    list = r->list;
    sum = 0.0f;
    if (list != 0) {
        count = r->count;
        for (i = 0; i < n && i < count; i++) {
            sum += list[i];
        }
        if (n < (int)count) {
            sum += k * list[n];
        }
    } else {
        sum = (float)n;
        sum += k;
    }
    return sum;
}
