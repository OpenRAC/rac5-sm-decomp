/* LEVEL_03.REL:0x154BF8 -- reset the little record when the marker is 0xFFFF. */

typedef struct {
    int func_000000;
    int b;
    int c;
    float d;
} func_000000;

extern func_000000 D_003AE758;

void func_154BF8(void *func_000000, unsigned int flag)
{
    if (flag == 0xFFFFu && func_000000 != 0) {
        D_003AE758.func_000000 = 0;
        D_003AE758.d = 1.0f;
        D_003AE758.c = 0;
        D_003AE758.b = 0;
    }
}
