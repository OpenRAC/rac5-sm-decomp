/* LEVEL_15:0x05DDA8 -- when the argument is the sentinel 0xFFFF and the object
   is not null, resets the global record D_1822E8: three zero words and a
   float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_1822E8;

void func_05DDA8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_1822E8.f_00 = 0;
            D_1822E8.f_04 = 0;
            D_1822E8.f_08 = 0;
            D_1822E8.f_0C = 1.0f;
        }
    }
}
