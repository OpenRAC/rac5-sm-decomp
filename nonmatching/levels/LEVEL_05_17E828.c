/* USA LEVEL_05.REL:0x17E828, 92-byte candidate (14 November 2026).
 * Measured gnu-ee-trial: 6 differing words; first difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_07FBB8(V3 *out, V3 *in);

void func_17E828(V3 *a0, V3 *a1, V3 *a2)
{
    V3 t;

    func_07FBB8(&t, a2);
    a0->x = t.x;
    a0->y = t.y;
    a0->z = t.z;
    a1->x = t.x;
    a1->y = t.y;
    a1->z = t.z;
}
