/* LEVEL_07:0x1B7820 -- when a1 is -1 and a0 is set, resets a global block and stores two powf results. */

typedef struct Blk07_1B7820 {
    int a_00;
    int b_04;
    int c_08;
    float d_0C;
} Blk07_1B7820;

extern Blk07_1B7820 D_003ACBC0;
extern float D_003ACBD0;
extern float D_003ACBD4;
extern float powf(float x, float y);

void func_1B7820(int a0, int a1) {
    float base;
    float expo;
    float *p0;
    float *p1;

    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    p0 = &D_003ACBD0;
    p1 = &D_003ACBD4;
    base = 0.800000011920929f;
    expo = 1.0f;
    D_003ACBC0.a_00 = 0;
    D_003ACBC0.b_04 = 0;
    D_003ACBC0.c_08 = 0;
    D_003ACBC0.d_0C = expo;
    *p0 = powf(base, expo);
    *p1 = powf(base, expo);
}
