/* LEVEL_17.REL:0x09FB70 -- reset of the global record D_00266F68. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00266F68;

void func__09FB70(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00266F68.f_0C = 1.0f;
            D_00266F68.i_00 = 0;
            D_00266F68.i_08 = 0;
            D_00266F68.i_04 = 0;
        }
    }
}
