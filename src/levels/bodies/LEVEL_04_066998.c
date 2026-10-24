/* LEVEL_04.REL:066998 -- resets the global record D_253958: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_253958;

void func_066998(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_253958.f_00 = 0;
            D_253958.f_04 = 0;
            D_253958.f_08 = 0;
            D_253958.f_0C = 1.0f;
        }
    }
}
