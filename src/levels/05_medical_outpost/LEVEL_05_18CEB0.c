/* LEVEL_05.REL:0x18CEB0 -- reset of the global record D_0038E410. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0038E410;

void func_05_18CEB0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0038E410.f_0C = 1.0f;
            D_0038E410.i_00 = 0;
            D_0038E410.i_08 = 0;
            D_0038E410.i_04 = 0;
        }
    }
}
