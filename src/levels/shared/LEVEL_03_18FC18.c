/* LEVEL_03.REL:0x18FC18 -- reset the little record when the marker is 0xFFFF. */

typedef struct {
    int func_000000;
    int b;
    int c;
    float d;
} func_000000;

extern func_000000 D_003B1BD8;

void func_18FC18(void *func_000000, unsigned int flag)
{
    if (flag == 0xFFFFu && func_000000 != 0) {
        D_003B1BD8.func_000000 = 0;
        D_003B1BD8.d = 1.0f;
        D_003B1BD8.c = 0;
        D_003B1BD8.b = 0;
    }
}
