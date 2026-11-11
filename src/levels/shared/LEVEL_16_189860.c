/* LEVEL_16:0x189860 -- when the argument is the sentinel 0xFFFF and the object
   is not null, resets the global record D_2E5EE0: three zero words and a
   float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_2E5EE0;

void func_189860(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_2E5EE0.f_00 = 0;
            D_2E5EE0.f_04 = 0;
            D_2E5EE0.f_08 = 0;
            D_2E5EE0.f_0C = 1.0f;
        }
    }
}
