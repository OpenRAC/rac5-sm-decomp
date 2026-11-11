/* LEVEL_22.REL:0x13CBD0 -- reset of the global record D_002E8328. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002E8328;

void func__13CBD0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E8328.f_0C = 1.0f;
            D_002E8328.i_00 = 0;
            D_002E8328.i_08 = 0;
            D_002E8328.i_04 = 0;
        }
    }
}
