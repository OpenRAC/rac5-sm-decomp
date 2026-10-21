/* LEVEL_15:0x05BF40 -- initialises a global record (three cleared words and
   1.0f), then stores the result of the shared routine in a neighbouring
   float. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00181350;
extern float D_00181360;

extern float func_000000(float a);

void func_05BF40(void *a0, int a1)
{
    float *dst;

    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            dst = &D_00181360;
            D_00181350.f_00 = 0;
            D_00181350.f_04 = 0;
            D_00181350.f_08 = 0;
            D_00181350.f_0C = 1.0f;
            *dst = func_000000(-0.5f);
        }
    }
}
