/* LEVEL_06.REL:0x1C8CD0 -- reset of the global record D_003856F8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003856F8;

void func_06_1C8CD0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003856F8.f_0C = 1.0f;
            D_003856F8.i_00 = 0;
            D_003856F8.i_08 = 0;
            D_003856F8.i_04 = 0;
        }
    }
}
