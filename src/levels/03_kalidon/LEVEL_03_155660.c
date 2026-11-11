/* LEVEL_03.REL @ 0x155660 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003AE778;

void func_155660(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AE778.f00 = 0;
            D_003AE778.f0C = 1.0f;
            D_003AE778.f08 = 0;
            D_003AE778.f04 = 0;
        }
    }
}
