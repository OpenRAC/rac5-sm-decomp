/* LEVEL_08:0x012A88 -- resets a small record: three ints to 0, one float to
   1.0 and the next float to 1/30, but only when a1 == 0xFFFF and a0 != 0. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0027E7D8;
extern float D_0027E7E8;

void func_012A88(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027E7D8.f3 = 1.0f;
            D_0027E7E8 = 1.0f / 30.0f;
            D_0027E7D8.i0 = 0;
            D_0027E7D8.i2 = 0;
            D_0027E7D8.i1 = 0;
        }
    }
}
