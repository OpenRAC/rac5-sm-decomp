/* LEVEL_15.REL:0x017968 -- reset the little record when the marker is 0xFFFF. */

typedef struct {
    int func_000000;
    int b;
    int c;
    float d;
} func_000000;

extern func_000000 D_00177D58;

void func_017968(void *func_000000, unsigned int flag)
{
    if (flag == 0xFFFFu && func_000000 != 0) {
        D_00177D58.func_000000 = 0;
        D_00177D58.d = 1.0f;
        D_00177D58.c = 0;
        D_00177D58.b = 0;
    }
}
