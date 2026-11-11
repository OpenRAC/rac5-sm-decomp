/* LEVEL_16.REL @ 0x0A4568 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00276418;

void func_0A4568(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00276418.f00 = 0;
            D_00276418.f0C = 1.0f;
            D_00276418.f08 = 0;
            D_00276418.f04 = 0;
        }
    }
}
