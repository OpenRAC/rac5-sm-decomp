/* LEVEL_15.REL:0x047D20 -- reset the little record when the marker is 0xFFFF. */

typedef struct {
    int a;
    int b;
    int c;
    float d;
} T;

extern T D_00181000;

void func_047D20(void *obj, unsigned int flag)
{
    if (flag == 0xFFFFu && obj != 0) {
        D_00181000.a = 0;
        D_00181000.d = 1.0f;
        D_00181000.c = 0;
        D_00181000.b = 0;
    }
}
