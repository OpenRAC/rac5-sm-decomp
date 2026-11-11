/* LEVEL_04.REL @ 0x0945B0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002A4980;

void func_0945B0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002A4980.f00 = 0;
            D_002A4980.f0C = 1.0f;
            D_002A4980.f08 = 0;
            D_002A4980.f04 = 0;
        }
    }
}
