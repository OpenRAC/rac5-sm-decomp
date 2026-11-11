/* LEVEL_17.REL:0x17F8E8 -- reset of the global record D_002D70E8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002D70E8;

void func_17_17F8E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002D70E8.f_0C = 1.0f;
            D_002D70E8.i_00 = 0;
            D_002D70E8.i_08 = 0;
            D_002D70E8.i_04 = 0;
        }
    }
}
