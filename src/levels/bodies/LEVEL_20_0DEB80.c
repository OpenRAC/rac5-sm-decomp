/* LEVEL_20.REL @ 0x0DEB80 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001C2F60;

void func_0DEB80(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001C2F60.f00 = 0;
            D_001C2F60.f0C = 1.0f;
            D_001C2F60.f08 = 0;
            D_001C2F60.f04 = 0;
        }
    }
}
