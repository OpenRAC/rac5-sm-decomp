/* USA LEVEL_01.REL:0x122540, 320-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad -mno-check-zero-division --as: 24 differing
 * words; first difference at 0x24.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef union {
    float f;
    unsigned int u;
} Bits;

float func_122540(float x)
{
    Bits in;
    Bits y;
    Bits r;
    unsigned int e;
    unsigned int q;
    float y2;
    float y3;
    float y4;
    float num;
    float den;

    in.f = x;
    e = (in.u >> 23) & 0xFF;
    q = (e + 2) / 3;
    y.u = (in.u & 0x807FFFFF) | ((e - q * 3 + 0x7E) << 23);
    y2 = y.f * y.f;
    y3 = y.f * y2;
    y4 = y2 * y2;
    num = y4 * 45.25483322143555f + y3 * 192.2798309326172f + y2 * 119.16548156738281f + y.f * 13.432501792907715f + 0.1636161208152771f;
    den = y4 * 14.80884075164795f + y3 * 151.97140502929688f + y2 * 168.5254364013672f + y.f * 33.99059295654297f + 1.0f;
    r.f = num / den;
    r.u = ((q + 0x54) << 23) | (r.u & 0x7FFFFF);
    return r.f;
}
