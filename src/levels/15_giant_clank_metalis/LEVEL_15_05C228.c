/* LEVEL_15:0x05C228 -- resets the global record D_181368: three
   zero words and a float set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_181368;

void func_05C228(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_181368.f_00 = 0;
            D_181368.f_04 = 0;
            D_181368.f_08 = 0;
            D_181368.f_0C = 1.0f;
        }
    }
}
