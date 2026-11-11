/* LEVEL_01.REL:0x190970 -- reset of the global record D_396D38. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_396D38;

void func_190970(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_396D38.f_0C = 1.0f;
            D_396D38.i_00 = 0;
            D_396D38.i_08 = 0;
            D_396D38.i_04 = 0;
        }
    }
}
