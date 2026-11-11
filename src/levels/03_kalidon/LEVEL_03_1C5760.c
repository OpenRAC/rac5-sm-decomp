/* LEVEL_03:0x1C5760 -- resets a three-word block and stores two powf results. */

extern char D_003B3428[];
extern float D_003B3438;
extern float D_003B343C;

float powf(float x, float y);

void func_1C5760(void *a0, unsigned int a1)
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
    b = D_003B3428;
    *(int *)b = 0;
    *(int *)(b + 4) = 0;
    *(int *)(b + 8) = 0;
    *(float *)(b + 0xC) = one;
    q0 = &D_003B3438;
    q1 = &D_003B343C;
    *q0 = powf(0.019999999552965164f, one);
    *q1 = powf(0.03999999910593033f, one);
}
