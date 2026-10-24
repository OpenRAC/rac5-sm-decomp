/* LEVEL_08.REL:0x0E6188 -- reset of the global record D_0037C898. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0037C898;

void func_08_0E6188(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037C898.f_0C = 1.0f;
            D_0037C898.i_00 = 0;
            D_0037C898.i_08 = 0;
            D_0037C898.i_04 = 0;
        }
    }
}
