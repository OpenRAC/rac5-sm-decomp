/* LEVEL_15.REL:0x0F0740 -- reset the little record when the marker is 0xFFFF. */

typedef struct {
    int a;
    int b;
    int c;
    float d;
} T;

extern T D_00269060;

void func_0F0740(void *obj, unsigned int flag)
{
    if (flag == 0xFFFFu && obj != 0) {
        D_00269060.a = 0;
        D_00269060.d = 1.0f;
        D_00269060.c = 0;
        D_00269060.b = 0;
    }
}
