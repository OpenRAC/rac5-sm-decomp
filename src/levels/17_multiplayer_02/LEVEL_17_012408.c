/* LEVEL_17:0x012408 -- same reset shape as LEVEL_08:0x012A88. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_001CF558;
extern float D_001CF568;

void func_012408(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001CF558.f3 = 1.0f;
            D_001CF568 = 1.0f / 30.0f;
            D_001CF558.i0 = 0;
            D_001CF558.i2 = 0;
            D_001CF558.i1 = 0;
        }
    }
}
