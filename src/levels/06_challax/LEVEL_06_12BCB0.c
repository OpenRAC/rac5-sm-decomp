/* LEVEL_06.REL @ 0x12BCB0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0037E490;

void func_12BCB0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037E490.f00 = 0;
            D_0037E490.f0C = 1.0f;
            D_0037E490.f08 = 0;
            D_0037E490.f04 = 0;
        }
    }
}
