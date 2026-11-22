/* LEVEL_22:0x130DA8 -- sums the first n entries of the record's float list and adds the next entry scaled by the factor; without a list the result is n plus the factor, and 0 for an empty record or negative n. */
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
    unsigned int i;

    if (r == 0 || n < 0) {
        return 0.0f;
    }
    list = r->list;
    sum = 0.0f;
    if (list != 0) {
        for (i = 0; i < n && i < r->count; i++) {
            sum += list[i];
        }
        if (n < (int)r->count) {
            sum += k * list[n];
        }
    } else {
        sum = (float)n;
        sum += k;
    }
    return sum;
}
