/* LEVEL_07:1C5B28 -- resets the global record D_003ADD00: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003ADD00;

void func_1C5B28(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003ADD00.f_00 = 0;
            D_003ADD00.f_0C = 1.0f;
            D_003ADD00.f_08 = 0;
            D_003ADD00.f_04 = 0;
        }
    }
}
