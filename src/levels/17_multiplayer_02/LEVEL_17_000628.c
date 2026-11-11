/* LEVEL_17.REL:0x000628 -- reset of the global record D_001CB880. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001CB880;

void func__000628(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001CB880.f_0C = 1.0f;
            D_001CB880.i_00 = 0;
            D_001CB880.i_08 = 0;
            D_001CB880.i_04 = 0;
        }
    }
}
