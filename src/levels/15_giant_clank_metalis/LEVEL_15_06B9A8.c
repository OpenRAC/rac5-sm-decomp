/* LEVEL_15:0x06B9A8 -- when the argument is the sentinel 0xFFFF and the object
   is not null, resets the global record D_182F40: three zero words and a
   float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_182F40;

void func_06B9A8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_182F40.f_00 = 0;
            D_182F40.f_04 = 0;
            D_182F40.f_08 = 0;
            D_182F40.f_0C = 1.0f;
        }
    }
}
