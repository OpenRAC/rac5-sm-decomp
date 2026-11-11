/* LEVEL_07:0x0D0258 -- resets a global record. */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00341A00;
extern float D_00341A10;
extern float D_00216F94;

void func_0D0258(void *a0, int a1)
{
    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    D_00341A00.f0C = 1.0f;
    D_00341A00.f00 = 0;
    D_00341A10 = D_00216F94;
    D_00341A00.f08 = 0;
    D_00341A00.f04 = 0;
}
