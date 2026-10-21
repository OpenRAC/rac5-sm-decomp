/* LEVEL_10:0x0CF638 -- resets a global record. */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00335500;
extern float D_00335510;
extern float D_0020BC94;

void func_0CF638(void *a0, int a1)
{
    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    D_00335500.f0C = 1.0f;
    D_00335500.f00 = 0;
    D_00335510 = D_0020BC94;
    D_00335500.f08 = 0;
    D_00335500.f04 = 0;
}
