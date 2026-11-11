/* LEVEL_22:0x137620 -- placement copy of LEVEL_03_1C5760.c: resets a three-word block and stores two powf results. */

extern char D_002E8088[];
extern float D_002E8098;
extern float D_002E809C;

float powf(float x, float y);

void func_137620(void *a0, unsigned int a1)
{
    char *b;
    float one;
    float *q0;
    float *q1;

    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    one = 1.0f;
    b = D_002E8088;
    *(int *)b = 0;
    *(int *)(b + 4) = 0;
    *(int *)(b + 8) = 0;
    *(float *)(b + 0xC) = one;
    q0 = &D_002E8098;
    q1 = &D_002E809C;
    *q0 = powf(0.019999999552965164f, one);
    *q1 = powf(0.03999999910593033f, one);
}
