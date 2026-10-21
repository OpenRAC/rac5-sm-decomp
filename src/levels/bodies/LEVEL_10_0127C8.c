/* LEVEL_10:0127C8 -- resets the global record and the float that follows it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00238958;
extern float D_00238968;

void func_0127C8(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00238958.f_00 = 0;
            D_00238958.f_04 = 0;
            D_00238958.f_08 = 0;
            D_00238958.f_0C = 1.0f;
            D_00238968 = 1.0f / 30.0f;
        }
    }
}
