/* LEVEL_02:0x1E6278 -- resets a small global record when the caller asks for
   a full refresh: three zero words and one float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003B0868;

void func_1E6278(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B0868.f_00 = 0;
            D_003B0868.f_0C = 1.0f;
            D_003B0868.f_08 = 0;
            D_003B0868.f_04 = 0;
        }
    }
}
