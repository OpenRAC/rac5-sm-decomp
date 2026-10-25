/* LEVEL_02.REL @ 0x0B8C58 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0033EE68;

void func_0B8C58(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0033EE68.f00 = 0;
            D_0033EE68.f0C = 1.0f;
            D_0033EE68.f08 = 0;
            D_0033EE68.f04 = 0;
        }
    }
}
