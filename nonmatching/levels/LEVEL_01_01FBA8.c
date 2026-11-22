/* USA LEVEL_01.REL:0x01FBA8, 388-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 21 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float func_01F918(float *q, char *buf, float *from, float step, int a, int b, int c);

int func_01FBA8(float *out, float *p1, float *o2, float *tmp, float *dist, float *p3, float *p2, int a, float maxd, int b)
{
    float d;
    float k;

    d = func_01F918(p1, (char *)p3, p2, maxd, a, b, 0);
    if (maxd <= d)
        return 0;
    tmp[0] = p1[0] - p2[0];
    tmp[1] = p1[1] - p2[1];
    tmp[2] = p1[2] - p2[2];
    if (d < 0.001f) {
        o2[0] = maxd * p3[0];
        o2[1] = maxd * p3[1];
        o2[2] = maxd * p3[2];
    } else {
        k = 1.0f - maxd / d;
        o2[0] = k * tmp[0];
        o2[1] = k * tmp[1];
        o2[2] = k * tmp[2];
    }
    out[0] = p2[0] + o2[0];
    out[1] = p2[1] + o2[1];
    out[2] = p2[2] + o2[2];
    *dist = d;
    return 1;
}
