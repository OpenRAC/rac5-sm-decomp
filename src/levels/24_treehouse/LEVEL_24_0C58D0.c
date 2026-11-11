/* LEVEL_24:0C58D0 -- resets the global record D_002F7EA8: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002F7EA8;

void func_0C58D0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002F7EA8.f_00 = 0;
            D_002F7EA8.f_0C = 1.0f;
            D_002F7EA8.f_08 = 0;
            D_002F7EA8.f_04 = 0;
        }
    }
}
