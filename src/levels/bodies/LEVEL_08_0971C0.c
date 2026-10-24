/* LEVEL_08.REL @ 0x0971C0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0028E480;

void func_0971C0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0028E480.f00 = 0;
            D_0028E480.f0C = 1.0f;
            D_0028E480.f08 = 0;
            D_0028E480.f04 = 0;
        }
    }
}
