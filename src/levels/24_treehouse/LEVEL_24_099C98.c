/* LEVEL_24.REL:0x0x099C98 -- reinitialises the level's sixteen-byte record
   (three ints and a float) and leaves the rest of the object alone.
   The retail order of the stores is +0, +0xC, +4, +8 and the page of the
   global is materialised in $v0 while the full address lives in $v1. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00268538;

void func_0x099C98(void *a0, int a1)
{
    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    D_00268538.a = 0;
    D_00268538.d = 1.0f;
    D_00268538.c = 0;
    D_00268538.b = 0;
}
