/* LEVEL_24:0F59E0 -- resets the global record D_002FD4E8: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002FD4E8;

void func_0F59E0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002FD4E8.f_00 = 0;
            D_002FD4E8.f_0C = 1.0f;
            D_002FD4E8.f_08 = 0;
            D_002FD4E8.f_04 = 0;
        }
    }
}
