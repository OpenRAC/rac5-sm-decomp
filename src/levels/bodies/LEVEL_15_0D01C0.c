/* LEVEL_15.REL:0x0D01C0 -- reset the little record when the marker is 0xFFFF. */

typedef struct {
    int a;
    int b;
    int c;
    float d;
} T;

extern T D_00248D18;

void func_0D01C0(void *obj, unsigned int flag)
{
    if (flag == 0xFFFFu && obj != 0) {
        D_00248D18.a = 0;
        D_00248D18.d = 1.0f;
        D_00248D18.c = 0;
        D_00248D18.b = 0;
    }
}
