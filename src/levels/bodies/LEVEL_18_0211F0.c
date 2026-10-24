/* LEVEL_18.REL @ 0x0211F0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001DECF8;

void func_0211F0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001DECF8.f00 = 0;
            D_001DECF8.f0C = 1.0f;
            D_001DECF8.f08 = 0;
            D_001DECF8.f04 = 0;
        }
    }
}
