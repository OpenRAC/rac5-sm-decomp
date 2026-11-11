/* LEVEL_24:0D6198 -- resets the global record D_002F9508: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002F9508;

void func_0D6198(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002F9508.f_00 = 0;
            D_002F9508.f_0C = 1.0f;
            D_002F9508.f_08 = 0;
            D_002F9508.f_04 = 0;
        }
    }
}
