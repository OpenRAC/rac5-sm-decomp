/* LEVEL_07:0x153388 -- initialises a global record (three cleared words and
   1.0f), then stores the result of the shared routine in a neighbouring
   float. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003A73B8;
extern float D_003A73C8;

extern float func_000000(float a, float b);

void func_153388(void *a0, int a1)
{
    float *dst;

    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            dst = &D_003A73C8;
            D_003A73B8.f_00 = 0;
            D_003A73B8.f_04 = 0;
            D_003A73B8.f_08 = 0;
            D_003A73B8.f_0C = 1.0f;
            *dst = func_000000(0.98f, 1.0f);
        }
    }
}
