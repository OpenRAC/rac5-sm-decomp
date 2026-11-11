/* LEVEL_19:0814C8 -- resets the global record D_001FE648: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_001FE648;

void func_0814C8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001FE648.f_00 = 0;
            D_001FE648.f_0C = 1.0f;
            D_001FE648.f_08 = 0;
            D_001FE648.f_04 = 0;
        }
    }
}
