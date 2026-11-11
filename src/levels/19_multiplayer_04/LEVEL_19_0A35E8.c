/* LEVEL_19.REL:0x0A35E8 -- reset of the global record D_00276588. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00276588;

void func_19_0A35E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00276588.f_0C = 1.0f;
            D_00276588.i_00 = 0;
            D_00276588.i_08 = 0;
            D_00276588.i_04 = 0;
        }
    }
}
