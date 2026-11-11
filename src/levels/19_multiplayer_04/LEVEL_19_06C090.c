/* LEVEL_19:06C090 -- resets the global record D_001ECE80: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_001ECE80;

void func_06C090(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001ECE80.f_00 = 0;
            D_001ECE80.f_0C = 1.0f;
            D_001ECE80.f_08 = 0;
            D_001ECE80.f_04 = 0;
        }
    }
}
