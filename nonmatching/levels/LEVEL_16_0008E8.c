/* USA LEVEL_16.REL:0x0008E8, 164-byte candidate (14 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x38.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Win_0008E8 {
    char pad_00[0x80];
    int w_80;
    int w_84;
    float f_88;
    float f_8C;
    char pad_90[0x108];
    int w_198;
    float f_19C;
    float f_1A0;
    float f_1A4;
    char pad_1A8[0x86];
    unsigned char b_22E;
};

extern struct Win_0008E8 D_001DA5E0;
extern float D_001A4888;

void func_0008E8(int wide)
{
    if (wide != 0) {
        D_001DA5E0.f_8C = 416.0f;
        D_001DA5E0.w_84 = 0;
        D_001A4888 = 0.5f;
        D_001DA5E0.f_19C = 416.0f;
        D_001DA5E0.f_88 = 512.0f;
        D_001DA5E0.f_1A0 = 512.0f;
        D_001DA5E0.w_80 = 0;
        D_001DA5E0.b_22E = 0;
        D_001DA5E0.w_198 = 0;
        D_001DA5E0.f_1A4 = 0.0f;
    } else {
        D_001DA5E0.b_22E = 1;
        D_001DA5E0.w_80 = 0;
        D_001A4888 = 1.0f;
        D_001DA5E0.w_84 = 0;
        D_001DA5E0.f_88 = 512.0f;
        D_001DA5E0.f_8C = 208.0f;
        D_001DA5E0.w_198 = 0;
        D_001DA5E0.f_1A0 = 512.0f;
        D_001DA5E0.f_19C = 208.0f;
        D_001DA5E0.f_1A4 = 208.0f;
    }
}
