/* LEVEL_20:0x0008D0 -- placement copy of LEVEL_16_0008E8.c: sets the screen window block for the wide (flag set) or the narrow layout. */
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

extern struct Win_0008E8 D_00131F60;
extern float D_00106F68;

void func_0008D0(int wide)
{
    if (wide != 0) {
        D_00131F60.w_80 = 0;
        D_00131F60.w_84 = 0;
        D_00131F60.f_88 = 512.0f;
        D_00131F60.f_8C = 416.0f;
        D_00106F68 = 0.5f;
        D_00131F60.f_19C = 416.0f;
        D_00131F60.f_1A0 = 512.0f;
        D_00131F60.b_22E = 0;
        D_00131F60.w_198 = 0;
        D_00131F60.f_1A4 = 0.0f;
    } else {
        D_00131F60.b_22E = 1;
        D_00131F60.w_80 = 0;
        D_00106F68 = 1.0f;
        D_00131F60.w_84 = 0;
        D_00131F60.f_88 = 512.0f;
        D_00131F60.f_8C = 208.0f;
        D_00131F60.w_198 = 0;
        D_00131F60.f_1A0 = 512.0f;
        D_00131F60.f_19C = 208.0f;
        D_00131F60.f_1A4 = 208.0f;
    }
}
