/* LEVEL_01.REL:0x1DB488 -- reset of the global record D_00398CE8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00398CE8;

void func_01_1DB488(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00398CE8.f_0C = 1.0f;
            D_00398CE8.i_00 = 0;
            D_00398CE8.i_08 = 0;
            D_00398CE8.i_04 = 0;
        }
    }
}
