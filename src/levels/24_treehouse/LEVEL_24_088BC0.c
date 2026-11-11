/* LEVEL_24.REL:0x088BC0 -- reset of the global record D_00213F08. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00213F08;

void func_24_088BC0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00213F08.f_0C = 1.0f;
            D_00213F08.i_00 = 0;
            D_00213F08.i_08 = 0;
            D_00213F08.i_04 = 0;
        }
    }
}
