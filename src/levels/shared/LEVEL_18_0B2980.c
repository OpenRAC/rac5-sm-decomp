/* LEVEL_18:0x0B2980 -- resets the global record D_277570: three
   zero words and a float set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_277570;

void func_0B2980(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_277570.f_00 = 0;
            D_277570.f_04 = 0;
            D_277570.f_08 = 0;
            D_277570.f_0C = 1.0f;
        }
    }
}
