/* LEVEL_02.REL:0x16F208 -- reset of the global record D_003AB140. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003AB140;

void func__16F208(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AB140.f_0C = 1.0f;
            D_003AB140.i_00 = 0;
            D_003AB140.i_08 = 0;
            D_003AB140.i_04 = 0;
        }
    }
}
