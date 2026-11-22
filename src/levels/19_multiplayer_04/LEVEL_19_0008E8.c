/* LEVEL_19:0x0008E8 -- placement copy of LEVEL_16_0008E8.c: sets the screen window block for the wide (flag set) or the narrow layout. */
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

extern struct Win_0008E8 D_001DA760;
extern float D_001A5A08;

void func_0008E8(int wide)
{
    if (wide != 0) {
        D_001DA760.w_80 = 0;
        D_001DA760.w_84 = 0;
        D_001DA760.f_88 = 512.0f;
        D_001DA760.f_8C = 416.0f;
        D_001A5A08 = 0.5f;
        D_001DA760.f_19C = 416.0f;
        D_001DA760.f_1A0 = 512.0f;
        D_001DA760.b_22E = 0;
        D_001DA760.w_198 = 0;
        D_001DA760.f_1A4 = 0.0f;
    } else {
        D_001DA760.b_22E = 1;
        D_001DA760.w_80 = 0;
        D_001A5A08 = 1.0f;
        D_001DA760.w_84 = 0;
        D_001DA760.f_88 = 512.0f;
        D_001DA760.f_8C = 208.0f;
        D_001DA760.w_198 = 0;
        D_001DA760.f_1A0 = 512.0f;
        D_001DA760.f_19C = 208.0f;
        D_001DA760.f_1A4 = 208.0f;
    }
}
