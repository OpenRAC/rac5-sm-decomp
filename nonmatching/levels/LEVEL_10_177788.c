/* USA LEVEL_10.REL:0x177788, 316-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 2 differing words; first difference at 0x34.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int func_021700(char *a0, char *a1, float *a2, float *a3, int t0, int t1, int t2);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void AddScaled(float *dst, float *a, float *b, float k)
{
    dst[0] = a[0] + b[0] * k;
    dst[1] = a[1] + b[1] * k;
    dst[2] = a[2] + b[2] * k;
}

int func_177788(char *mover, char *target, float *step, char *other, float scale)
{
    float pos[3];

    Copy3(pos, (float *)(mover + 0x30));
    if ((unsigned char)func_021700(target + 0x24, target, pos, step, 0x68, 0, 0) != 0) {
        if (*(int *)(target + 0x14) != 2
            || (*(char **)(target + 0x10) != mover && *(char **)(target + 0x10) != other)) {
            AddScaled((float *)(target + 0x18), pos, step, *(float *)(target + 0x24));
            return 1;
        }
    }
    AddScaled((float *)(mover + 0x30), pos, step, scale);
    return 0;
}
