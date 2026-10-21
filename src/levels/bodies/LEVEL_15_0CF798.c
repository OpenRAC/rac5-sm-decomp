/* LEVEL_15.REL:0x0CF798 -- reset the little record when the marker is 0xFFFF. */

typedef struct {
    int a;
    int b;
    int c;
    float d;
} T;

extern T D_00248CD8;

void func_0CF798(void *obj, unsigned int flag)
{
    if (flag == 0xFFFFu && obj != 0) {
        D_00248CD8.a = 0;
        D_00248CD8.d = 1.0f;
        D_00248CD8.c = 0;
        D_00248CD8.b = 0;
    }
}
