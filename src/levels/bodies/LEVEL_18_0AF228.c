/* LEVEL_18:0x0AF228 -- resets a small global record when the caller asks for
   a full refresh: three zero words and one float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002771B0;

void func_0AF228(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002771B0.f_00 = 0;
            D_002771B0.f_0C = 1.0f;
            D_002771B0.f_08 = 0;
            D_002771B0.f_04 = 0;
        }
    }
}
