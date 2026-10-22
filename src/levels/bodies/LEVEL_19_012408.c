/* LEVEL_19:0x012408 -- initialises the level's timer record when the caller
   asks for a fresh one (a1 == 0xFFFF) and a valid record is supplied. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_001DE3D8;
extern float D_001DE3E8;

void func_012408(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 == 0) {
            return;
        }
        D_001DE3D8.f3 = 1.0f;
        D_001DE3D8.i0 = 0;
        D_001DE3D8.i2 = 0;
        D_001DE3D8.i1 = 0;
        D_001DE3E8 = 0.033333335f;
    }
}
