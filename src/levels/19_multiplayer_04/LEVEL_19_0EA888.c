/* LEVEL_19.REL:0x0EA888 -- reset of the global record D_27F6C8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_27F6C8;

void func_0EA888(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_27F6C8.f_0C = 1.0f;
            D_27F6C8.i_00 = 0;
            D_27F6C8.i_08 = 0;
            D_27F6C8.i_04 = 0;
        }
    }
}
