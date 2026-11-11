/* LEVEL_02:0x012A08 -- initialises the level's timer record when the caller
   asks for a fresh one (a1 == 0xFFFF) and a valid record is supplied. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00246A58;
extern float D_00246A68;

void func_012A08(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 == 0) {
            return;
        }
        D_00246A58.f3 = 1.0f;
        D_00246A58.i0 = 0;
        D_00246A58.i2 = 0;
        D_00246A58.i1 = 0;
        D_00246A68 = 0.033333335f;
    }
}
