/* USA LEVEL_01.REL:0x0B2AB8, 296-byte candidate (21 November 2026).
 * Measured pinned: 11 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    unsigned int from;
    unsigned int to;
    float t;
} Blend;

extern int func_1EB278(float v);

unsigned int func_0B2AB8(Blend *b)
{
    float t;
    unsigned int from;
    unsigned int to;
    unsigned int out;
    int a;

    t = b->t;
    to = b->to;
    from = b->from;
    a = to >> 24;
    out = func_1EB278(t * (float)(a - (int)(from >> 24)) + (float)(int)(from >> 24)) << 24;
    a = (from >> 16) & 0xFF;
    out |= func_1EB278(t * (float)(int)(((to >> 16) & 0xFF) - a) + (float)a) << 16;
    a = (from >> 8) & 0xFF;
    out |= func_1EB278(t * (float)(int)(((to >> 8) & 0xFF) - a) + (float)a) << 8;
    out |= func_1EB278(t * (float)(int)((to & 0xFF) - (from & 0xFF)) + (float)(int)(from & 0xFF));
    return out;
}
