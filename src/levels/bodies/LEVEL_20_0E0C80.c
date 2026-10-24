/* LEVEL_20.REL:0E0C80 -- resets the global record D_001C3090: three zero words
   and a float set to one, but only when a1 is 0xFFFF and a0 is not zero. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_001C3090;

void func_0E0C80(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001C3090.f_00 = 0;
            D_001C3090.f_0C = 1.0f;
            D_001C3090.f_08 = 0;
            D_001C3090.f_04 = 0;
        }
    }
}
