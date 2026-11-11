/* LEVEL_07.REL:15BE48 -- resets the global record D_003A9280: three zero words
   and a float set to one, but only when a1 is 0xFFFF and a0 is not zero. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003A9280;

void func_15BE48(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003A9280.f_00 = 0;
            D_003A9280.f_0C = 1.0f;
            D_003A9280.f_08 = 0;
            D_003A9280.f_04 = 0;
        }
    }
}
