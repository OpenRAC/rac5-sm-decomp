/* LEVEL_07:198440 -- resets the global record D_003AC518 and the neighbour
   float D_003AC528 when the second argument is the -1 sentinel. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003AC518;
extern float D_003AC528;

void func_198440(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AC518.f_0C = 1.0f;
            D_003AC528 = 6.7599993f;
            D_003AC518.f_00 = 0;
            D_003AC518.f_08 = 0;
            D_003AC518.f_04 = 0;
        }
    }
}
