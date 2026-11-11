/* LEVEL_16.REL:0B1780 -- resets the global record D_276E60: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_276E60;

void func_0B1780(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_276E60.f_00 = 0;
            D_276E60.f_04 = 0;
            D_276E60.f_08 = 0;
            D_276E60.f_0C = 1.0f;
        }
    }
}
