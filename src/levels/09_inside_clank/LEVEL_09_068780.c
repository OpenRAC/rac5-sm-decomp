/* LEVEL_09.REL:0x068780 -- reset of the global record D_002209D8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002209D8;

void func__068780(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002209D8.f_0C = 1.0f;
            D_002209D8.i_00 = 0;
            D_002209D8.i_08 = 0;
            D_002209D8.i_04 = 0;
        }
    }
}
