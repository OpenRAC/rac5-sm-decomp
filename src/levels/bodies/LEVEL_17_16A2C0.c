/* LEVEL_17.REL:16A2C0 -- resets the global record D_2D6C08: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_2D6C08;

void func_16A2C0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_2D6C08.f_00 = 0;
            D_2D6C08.f_04 = 0;
            D_2D6C08.f_08 = 0;
            D_2D6C08.f_0C = 1.0f;
        }
    }
}
