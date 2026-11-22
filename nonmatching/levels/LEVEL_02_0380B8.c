/* USA LEVEL_02.REL:0x0380B8, 348-byte candidate (21 November 2026).
 * Measured pinned: 18 differing words; first difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Probe_0380B8 {
    char pad0[0x14];
    float f14;
    float f18;
    float f1c;
    float f20;
};

struct Hit_0380B8 {
    char pad0[0x38];
    float f38;
    char pad1[4];
    float f40;
    char pad2[0xC];
    unsigned char b50;
};

extern struct Probe_0380B8 *D_0024A5E0;

extern void func_038250(void *a0, float *a1);
extern void func_0872A0(void *a0, struct Probe_0380B8 *a1, int a2, int a3, int t0, int t1, int t2, int t3,
                        float f12, float f13, float f14, float f15);

void func_0380B8(void *obj, struct Hit_0380B8 *hit, float *axis, float *pivot, float *pos)
{
    float diff[3];

    if (hit->b50 == 0) {
        hit->f38 *= 0.04f;
        hit->f40 *= 0.04f;
        func_038250(obj, pivot);
        if (D_0024A5E0 != 0) {
            func_0872A0(obj, D_0024A5E0, 0, 0, 0, 0, 0, 1, D_0024A5E0->f14, D_0024A5E0->f18,
                        D_0024A5E0->f1c, D_0024A5E0->f20);
        }
    }
    diff[0] = pos[0] - pivot[0];
    diff[1] = pos[1] - pivot[1];
    diff[2] = pos[2] - pivot[2];
    if (diff[0] * axis[0] + diff[1] * axis[1] + diff[2] * axis[2] < 0.0f) {
        pos[0] = pos[0] + diff[0] * -2.0f;
        pos[1] = pos[1] + diff[1] * -2.0f;
        pos[2] = pos[2] + diff[2] * -2.0f;
    }
    hit->b50 = 1;
}
