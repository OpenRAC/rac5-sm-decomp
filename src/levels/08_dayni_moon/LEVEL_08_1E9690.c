/* LEVEL_08.REL:0x1E9690 -- reset of the global record D_003EA7B8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003EA7B8;

void func_08_1E9690(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003EA7B8.f_0C = 1.0f;
            D_003EA7B8.i_00 = 0;
            D_003EA7B8.i_08 = 0;
            D_003EA7B8.i_04 = 0;
        }
    }
}
