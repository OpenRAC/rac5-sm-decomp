/* LEVEL_02.REL:0x030010 -- reset the little record when the marker is 0xFFFF. */

typedef struct {
    int a;
    int b;
    int c;
    float d;
} T;

extern T D_00249D00;

void func_030010(void *obj, unsigned int flag)
{
    if (flag == 0xFFFFu && obj != 0) {
        D_00249D00.a = 0;
        D_00249D00.d = 1.0f;
        D_00249D00.c = 0;
        D_00249D00.b = 0;
    }
}
