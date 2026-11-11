/* LEVEL_19.REL:0x075CF0 -- reset of the global record D_001F13A8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001F13A8;

void func_19_075CF0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001F13A8.f_0C = 1.0f;
            D_001F13A8.i_00 = 0;
            D_001F13A8.i_08 = 0;
            D_001F13A8.i_04 = 0;
        }
    }
}
