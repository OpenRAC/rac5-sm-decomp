/* LEVEL_04.REL:0x1E85C8 -- reset of the global record D_003B3F28. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003B3F28;

void func__1E85C8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B3F28.f_0C = 1.0f;
            D_003B3F28.i_00 = 0;
            D_003B3F28.i_08 = 0;
            D_003B3F28.i_04 = 0;
        }
    }
}
