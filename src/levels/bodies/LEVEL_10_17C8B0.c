/* LEVEL_10.REL @ 0x17C8B0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0039F370;

void func_17C8B0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0039F370.f00 = 0;
            D_0039F370.f0C = 1.0f;
            D_0039F370.f08 = 0;
            D_0039F370.f04 = 0;
        }
    }
}
