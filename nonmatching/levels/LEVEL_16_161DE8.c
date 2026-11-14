/* USA LEVEL_16.REL:0x161DE8, 120-byte candidate (14 November 2026).
 * Measured gnu-ee-trial-divpad: 16 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Blk {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
};

extern float D_001D5A98;
extern float D_001D5AD8;
extern struct Blk D_002E5350;
extern float D_002E5360;
extern float D_002E5364;

void func_161DE8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E5350.w_00 = 0;
            D_002E5350.f_0C = 1.0f;
            D_002E5350.w_04 = 0;
            D_002E5350.w_08 = 0;
            D_002E5360 = 1.6000000238418579f / D_001D5A98;
            D_002E5364 = 1.6000000238418579f / D_001D5AD8;
        }
    }
}
