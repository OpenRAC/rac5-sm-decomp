/* LEVEL_19.REL @ 0x02EC08 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001E20F8;

void func_02EC08(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001E20F8.f00 = 0;
            D_001E20F8.f0C = 1.0f;
            D_001E20F8.f08 = 0;
            D_001E20F8.f04 = 0;
        }
    }
}
