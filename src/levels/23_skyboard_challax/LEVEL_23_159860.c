/* LEVEL_23.REL @ 0x159860 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00363D68;

void func_159860(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00363D68.f00 = 0;
            D_00363D68.f0C = 1.0f;
            D_00363D68.f08 = 0;
            D_00363D68.f04 = 0;
        }
    }
}
