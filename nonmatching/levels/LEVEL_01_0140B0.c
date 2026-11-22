/* USA LEVEL_01.REL:0x0140B0, 296-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 26 differing words; first difference at 0x64.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Vec3 {
    float x, y, z;
};
struct Hit {
    char pad[0xC];
    unsigned short flags;
    char padE[0x12];
};
extern float D_0022F704;
extern int func_020570(float *drop, struct Hit *h, struct Vec3 *v, float y);

static __inline__ int InReach(float d, float h)
{
    if (d <= h)
        return 1;
    if (d <= 9.99999974737875e-06f)
        return 1;
    return 0;
}

int func_0140B0(struct Vec3 *p, float *outY, struct Hit *outHit, float h)
{
    struct Vec3 v;
    struct Hit hit;
    float drop;
    float d;
    int ok;

    v.x = p->x;
    v.y = p->y + h;
    v.z = p->z;
    if ((unsigned char)func_020570(&drop, &hit, &v, v.y - D_0022F704)) {
        v.y = v.y - drop;
        if (outY)
            *outY = v.y;
        if (outHit && (hit.flags & 1))
            return 0;
        d = __builtin_fabsf(v.y - p->y);
        ok = InReach(d, h);
        if ((unsigned char)ok)
            return 1;
        return 0;
    }
    if (outY)
        *outY = -1e30f;
    return 0;
}
