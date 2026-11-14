/* USA LEVEL_03.REL:0x0B1388, 104-byte candidate (14 November 2026).
 * Measured gnu-ee-trial: 25 differing words; first difference at 0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct V3 { float x, y, z; } V3;
extern int D_00214804;
extern V3 D_003427A0[];
extern float D_003427C8[];
extern float D_003427D8[];
void func_0B1388(V3 *p, float a, float b)
{
    V3 *d = &D_003427A0[D_00214804];
    int m;
    d->x = p->x;
    d->y = p->y;
    d->z = p->z;
    m = D_00214804;
    D_003427C8[m] = a;
    D_003427D8[m] = b;
    D_00214804 = m + 1;
}
