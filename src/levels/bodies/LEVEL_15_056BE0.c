/* LEVEL_15.REL:0x056BE0 -- reset the little record when the marker is 0xFFFF. */

typedef struct {
    int func_000000;
    int b;
    int c;
    float d;
} func_000000;

extern func_000000 D_001812D0;

void func_056BE0(void *func_000000, unsigned int flag)
{
    if (flag == 0xFFFFu && func_000000 != 0) {
        D_001812D0.func_000000 = 0;
        D_001812D0.d = 1.0f;
        D_001812D0.c = 0;
        D_001812D0.b = 0;
    }
}
