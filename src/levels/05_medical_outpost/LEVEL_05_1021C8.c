/* LEVEL_05:1021C8 -- resets the global record D_0031D568: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0031D568;

void func_1021C8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0031D568.f_00 = 0;
            D_0031D568.f_0C = 1.0f;
            D_0031D568.f_08 = 0;
            D_0031D568.f_04 = 0;
        }
    }
}
