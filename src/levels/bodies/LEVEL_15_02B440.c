/* LEVEL_15.REL:0x02B440 -- reset the little record when the marker is 0xFFFF. */

typedef struct {
    int a;
    int b;
    int c;
    float d;
} T;

extern T D_0017B268;

void func_02B440(void *obj, unsigned int flag)
{
    if (flag == 0xFFFFu && obj != 0) {
        D_0017B268.a = 0;
        D_0017B268.d = 1.0f;
        D_0017B268.c = 0;
        D_0017B268.b = 0;
    }
}
