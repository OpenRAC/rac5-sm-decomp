/* LEVEL_10.REL:0x16F418 -- reset of the global record D_0039F168. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0039F168;

void func_10_16F418(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0039F168.f_0C = 1.0f;
            D_0039F168.i_00 = 0;
            D_0039F168.i_08 = 0;
            D_0039F168.i_04 = 0;
        }
    }
}
