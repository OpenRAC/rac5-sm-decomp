/* LEVEL_22:0BCF58 -- resets the global record D_00282380: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00282380;

void func_0BCF58(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00282380.f_00 = 0;
            D_00282380.f_0C = 1.0f;
            D_00282380.f_08 = 0;
            D_00282380.f_04 = 0;
        }
    }
}
