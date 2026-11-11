/* LEVEL_23.REL @ 0x1A32F8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00366938;

void func_1A32F8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00366938.f00 = 0;
            D_00366938.f0C = 1.0f;
            D_00366938.f08 = 0;
            D_00366938.f04 = 0;
        }
    }
}
