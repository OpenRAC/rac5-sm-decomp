/* LEVEL_17:0x0B8788 -- when the argument is the sentinel 0xFFFF and the object
   is not null, resets the global record D_26B318: three zero words and a
   float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_26B318;

void func_0B8788(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_26B318.f_00 = 0;
            D_26B318.f_04 = 0;
            D_26B318.f_08 = 0;
            D_26B318.f_0C = 1.0f;
        }
    }
}
