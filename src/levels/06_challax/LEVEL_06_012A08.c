/* LEVEL_06.REL:0x012A08 -- resets the global clock record: rate to one,
   frame step to one thirtieth, accumulators to zero. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_21C2D8;
extern float D_21C2E8;

void func_012A08(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_21C2D8.f_0C = 1.0f;
            D_21C2E8 = 1.0f / 30.0f;
            D_21C2D8.i_00 = 0;
            D_21C2D8.i_08 = 0;
            D_21C2D8.i_04 = 0;
        }
    }
}
