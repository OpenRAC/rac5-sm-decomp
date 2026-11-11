/* LEVEL_15.REL:0x05F348 -- reset the little record when the marker is 0xFFFF. */

typedef struct {
    int a;
    int b;
    int c;
    float d;
} T;

extern T D_00182488;

void func_05F348(void *obj, unsigned int flag)
{
    if (flag == 0xFFFFu && obj != 0) {
        D_00182488.a = 0;
        D_00182488.d = 1.0f;
        D_00182488.c = 0;
        D_00182488.b = 0;
    }
}
