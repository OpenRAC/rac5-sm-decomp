/* LEVEL_16.REL:0x137878 -- reset the little record when the marker is 0xFFFF. */

typedef struct {
    int a;
    int b;
    int c;
    float d;
} T;

extern T D_002E2C70;

void func_137878(void *obj, unsigned int flag)
{
    if (flag == 0xFFFFu && obj != 0) {
        D_002E2C70.a = 0;
        D_002E2C70.d = 1.0f;
        D_002E2C70.c = 0;
        D_002E2C70.b = 0;
    }
}
