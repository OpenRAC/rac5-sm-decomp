/* LEVEL_03.REL:0x189A00 -- reset of the global record D_003B1A68. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003B1A68;

void func_03_189A00(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B1A68.f_0C = 1.0f;
            D_003B1A68.i_00 = 0;
            D_003B1A68.i_08 = 0;
            D_003B1A68.i_04 = 0;
        }
    }
}
