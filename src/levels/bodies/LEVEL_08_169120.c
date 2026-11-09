/* LEVEL_08:0x169120 -- placement copy of LEVEL_02_161228.c: advances a timer field clamped at one, feeds it to a helper, and fires an event on reaching one. */

int func_132158(unsigned int a0, unsigned int a1, float t);
void func_168D58(char *obj, unsigned char kind, int flag);

void func_169120(char *obj)
{
    char *p;
    float tmp;
    float one;
    float *src;
    float v;

    p = *(char **)(obj + 0x58);
    *(float *)(p + 0x60) = *(float *)(p + 0x60) + 0.04444444552063942f;
    one = 1.0f;
    tmp = one;
    if (*(float *)(p + 0x60) < one) {
        src = &tmp;
    } else {
        src = (float *)(p + 0x60);
    }
    v = *src;
    *(float *)(p + 0x60) = v;
    *(int *)(obj + 0x68) = func_132158(0x00FFFFFF, 0x88FFFFFF, v);
    if (*(float *)(p + 0x60) == one) {
        func_168D58(obj, *(unsigned char *)(obj + 0x45), 1);
    }
}
