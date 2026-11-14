/* USA LEVEL_15.REL:0x13E720, 156-byte candidate (14 November 2026).
 * Measured pinned: 10 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Blend {
    int f0;
    int f4;
    float *key;
    float t;
};
extern int *func_07B6B0(int index);
extern void func_13E0F0(void *r, void *q, float u, float v, void *p, float *k, float a, float b, float c, float d, float e, float f,
                        float g, float h);
void func_13E720(int unused, struct Blend *p, void *q, float u, float v)
{
    float *l;
    int *r;
    l = p->key;
    r = func_07B6B0(unused);

    func_13E0F0(r, q, u, v, p, p->key + 11, l[0], l[7], l[1], l[8], l[3], l[9], l[5], l[10]);
}
