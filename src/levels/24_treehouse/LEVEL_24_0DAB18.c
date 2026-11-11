/* LEVEL_24.REL @ 0x0DAB18 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002F9548;

void func_0DAB18(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002F9548.f00 = 0;
            D_002F9548.f0C = 1.0f;
            D_002F9548.f08 = 0;
            D_002F9548.f04 = 0;
        }
    }
}
