/* USA LEVEL_07.REL:0x19D010, 188-byte candidate (14 November 2026).
 * Measured gnu-ee-trial: 2 differing words; first difference at 0x74.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);

typedef struct {
    float x, y, z;
} Vec3_t;

extern float D_002399E0[2];

void func_19D010(Vec3_t *in, Vec3_t *out)
{
    float ang;
    float d[2];

    ang = (float)rand();
    ang = ang * 4.656612873077393e-10f;
    ang = ang + ang;
    ang = ang * 3.1415927410125732f;
    d[0] = cosf(ang);
    d[1] = sinf(ang);
    d[0] = d[0] * D_002399E0[0];
    d[1] = d[1] * D_002399E0[1];
    out->x = in->x + d[0];
    out->z = in->z + d[1];
    out->y = in->y;
}
