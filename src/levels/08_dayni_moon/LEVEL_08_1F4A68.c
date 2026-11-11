/* LEVEL_08.REL:1F4A68 -- resets the global record D_3EABE8: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_3EABE8;

void func_1F4A68(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_3EABE8.f_00 = 0;
            D_3EABE8.f_04 = 0;
            D_3EABE8.f_08 = 0;
            D_3EABE8.f_0C = 1.0f;
        }
    }
}
