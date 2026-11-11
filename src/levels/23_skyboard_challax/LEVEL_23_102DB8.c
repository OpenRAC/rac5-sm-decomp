/* LEVEL_23.REL:102DB8 -- resets the global record D_00302C08: three zero words
   and a float set to one, but only when a1 is 0xFFFF and a0 is not zero. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00302C08;

void func_102DB8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00302C08.f_00 = 0;
            D_00302C08.f_0C = 1.0f;
            D_00302C08.f_08 = 0;
            D_00302C08.f_04 = 0;
        }
    }
}
