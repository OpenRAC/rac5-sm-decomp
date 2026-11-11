/* LEVEL_04.REL:0x171B38 -- reset of the global record D_003AFF38. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003AFF38;

void func_04_171B38(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AFF38.f_0C = 1.0f;
            D_003AFF38.i_00 = 0;
            D_003AFF38.i_08 = 0;
            D_003AFF38.i_04 = 0;
        }
    }
}
