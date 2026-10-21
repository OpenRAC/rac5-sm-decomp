/* LEVEL_15.REL:0x1243112 -- resets a global record when the index argument is
   the "none" marker 0xFFFF and the pointer argument is not null. */
struct Rec {
    int a;
    int b;
    int c;
    float f;
};

extern struct Rec D_002F3CD8;

void func_12F7E8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002F3CD8.a = 0;
        D_002F3CD8.b = 0;
        D_002F3CD8.c = 0;
        D_002F3CD8.f = 1.0f;
    }
}
