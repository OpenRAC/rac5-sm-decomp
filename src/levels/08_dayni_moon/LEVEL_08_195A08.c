/* LEVEL_08.REL:195A08 -- resets the global record D_3E6C68: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_3E6C68;

void func_195A08(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_3E6C68.f_00 = 0;
            D_3E6C68.f_04 = 0;
            D_3E6C68.f_08 = 0;
            D_3E6C68.f_0C = 1.0f;
        }
    }
}
