/* LEVEL_22.REL:0x0x0C5928 -- reinitialises the level's sixteen-byte record
   (three ints and a float) and leaves the rest of the object alone.
   The retail order of the stores is +0, +0xC, +4, +8 and the page of the
   global is materialised in $v0 while the full address lives in $v1. */
typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00282C70;

void func_0x0C5928(void *a0, int a1)
{
    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    D_00282C70.a = 0;
    D_00282C70.d = 1.0f;
    D_00282C70.c = 0;
    D_00282C70.b = 0;
}
