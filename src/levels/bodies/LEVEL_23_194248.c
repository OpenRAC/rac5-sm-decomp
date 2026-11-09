/* LEVEL_23:0x194248 -- placement copy of LEVEL_03_1C5760.c: resets a three-word block and stores two powf results. */

extern char D_00366370[];
extern float D_00366380;
extern float D_00366384;

float powf(float x, float y);

void func_194248(void *a0, unsigned int a1)
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
    b = D_00366370;
    *(int *)b = 0;
    *(int *)(b + 4) = 0;
    *(int *)(b + 8) = 0;
    *(float *)(b + 0xC) = one;
    q0 = &D_00366380;
    q1 = &D_00366384;
    *q0 = powf(0.019999999552965164f, one);
    *q1 = powf(0.03999999910593033f, one);
}
