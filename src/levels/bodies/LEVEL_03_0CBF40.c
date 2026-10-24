/* LEVEL_03.REL:0x0CBF40 -- reset of the global record D_00346E78. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00346E78;

void func_03_0CBF40(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00346E78.f_0C = 1.0f;
            D_00346E78.i_00 = 0;
            D_00346E78.i_08 = 0;
            D_00346E78.i_04 = 0;
        }
    }
}
