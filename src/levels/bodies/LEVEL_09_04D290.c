/* LEVEL_09:04D290 -- resets the global record D_00220428: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00220428;

void func_04D290(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00220428.f_00 = 0;
            D_00220428.f_0C = 1.0f;
            D_00220428.f_08 = 0;
            D_00220428.f_04 = 0;
        }
    }
}
