/* LEVEL_10:032480 -- resets the global record D_0023C460: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0023C460;

void func_032480(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0023C460.f_00 = 0;
            D_0023C460.f_0C = 1.0f;
            D_0023C460.f_08 = 0;
            D_0023C460.f_04 = 0;
        }
    }
}
