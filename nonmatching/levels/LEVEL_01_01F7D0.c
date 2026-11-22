/* USA LEVEL_01.REL:0x01F7D0, 328-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 4 differing words; first difference at 0x2C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sqrtf(float x);

typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_01F5C8(V3 *v, int a, int b);

int func_01F7D0(V3 *out_a, V3 *out_b, V3 *p, int a, int b, float len)
{
    V3 q;
    V3 d;
    float len2;
    float t;

    q.x = p->x;
    q.y = p->y;
    q.z = p->z;
    func_01F5C8(&q, a, b);
    d.x = q.x - p->x;
    d.y = q.y - p->y;
    d.z = q.z - p->z;
    len2 = d.x * d.x + d.y * d.y + d.z * d.z;
    if (len2 < 2.384185791015625e-07f)
        return 0;
    out_a->x = q.x;
    out_a->y = q.y;
    out_a->z = q.z;
    t = -len / sqrtf(len2);
    out_b->x = q.x + d.x * t;
    out_b->y = q.y + d.y * t;
    out_b->z = q.z + d.z * t;
    return 1;
}
