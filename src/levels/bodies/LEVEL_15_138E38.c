/* LEVEL_15.REL:0x138E38 -- reset the little record when the marker is 0xFFFF. */

typedef struct {
    int a;
    int b;
    int c;
    float d;
} T;

extern T D_002F5330;

void func_138E38(void *obj, unsigned int flag)
{
    if (flag == 0xFFFFu && obj != 0) {
        D_002F5330.a = 0;
        D_002F5330.d = 1.0f;
        D_002F5330.c = 0;
        D_002F5330.b = 0;
    }
}
