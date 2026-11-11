/* LEVEL_05:0x0CC7A0 -- same reset shape, the second float comes from a global. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00317FC0;
extern float D_00317FD0;
extern float D_001F2014;

void func_0CC7A0(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00317FC0.f3 = 1.0f;
            D_00317FD0 = D_001F2014;
            D_00317FC0.i0 = 0;
            D_00317FC0.i2 = 0;
            D_00317FC0.i1 = 0;
        }
    }
}
