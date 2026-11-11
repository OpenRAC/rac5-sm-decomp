typedef struct {
    char pad0[0x40];
    int *rows;
    unsigned char code;
} T;

float func_07CA10(T *a0, unsigned int index)
{
    int *q = (int *)((a0->code * 0x34) + a0->rows[1]);
    int *r = *(int **)(q + 2);
    unsigned char count = *(unsigned char *)(r + 2);

    if (index >= count) {
        return 0.0f;
    } else {
        return *(float *)((index << 6) + r[0] + 0x28);
    }
}
