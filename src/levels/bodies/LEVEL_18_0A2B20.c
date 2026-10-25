/* LEVEL_18.REL:0x0A2B20 -- reset of the global record D_00276750. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00276750;

void func_18_0A2B20(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00276750.f_0C = 1.0f;
            D_00276750.i_00 = 0;
            D_00276750.i_08 = 0;
            D_00276750.i_04 = 0;
        }
    }
}
