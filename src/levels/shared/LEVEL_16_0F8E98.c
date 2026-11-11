/* LEVEL_16.REL:0x0F8E98 -- reset the little record when the marker is 0xFFFF. */

typedef struct {
    int a;
    int b;
    int c;
    float d;
} T;

extern T D_0027F688;

void func_0F8E98(void *obj, unsigned int flag)
{
    if (flag == 0xFFFFu && obj != 0) {
        D_0027F688.a = 0;
        D_0027F688.d = 1.0f;
        D_0027F688.c = 0;
        D_0027F688.b = 0;
    }
}
