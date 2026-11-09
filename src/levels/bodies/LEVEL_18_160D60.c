/* LEVEL_18:0x160D60 -- on a reset request, reinitializes the 0x2E55B0 block and stores four weights. */

extern float powf(float a, float b);
extern char D_002E55B0[];
extern float D_002E55C0;
extern float D_002E55C4;
extern float D_002E55C8;
extern float D_002E55CC;

void func_160D60(int a0, int a1)
{
    float one;
    float *p0;
    float *p1;
    float *p2;
    float *p3;

    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    one = 1.0f;
    *(int *)(D_002E55B0 + 0x00) = 0;
    *(int *)(D_002E55B0 + 0x04) = 0;
    *(int *)(D_002E55B0 + 0x08) = 0;
    *(float *)(D_002E55B0 + 0x0C) = one;
    p0 = &D_002E55C0;
    p1 = &D_002E55C4;
    p2 = &D_002E55C8;
    p3 = &D_002E55CC;
    *p0 = powf(one, one);
    *p1 = powf(one, one);
    *p2 = powf(0.94f, one);
    *p3 = powf(0.99f, one);
}
