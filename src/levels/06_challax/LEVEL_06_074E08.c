/* LEVEL_06.REL:0x074E08 -- reset of the global record D_002273C0. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002273C0;

void func__074E08(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002273C0.f_0C = 1.0f;
            D_002273C0.i_00 = 0;
            D_002273C0.i_08 = 0;
            D_002273C0.i_04 = 0;
        }
    }
}
