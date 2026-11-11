/* LEVEL_15.REL:0x660448 -- resets a global record when the index argument is
   the "none" marker 0xFFFF and the pointer argument is not null. */
struct Rec {
    int a;
    int b;
    int c;
    float f;
};

extern struct Rec D_00240730;

void func_0A13E0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00240730.a = 0;
        D_00240730.b = 0;
        D_00240730.c = 0;
        D_00240730.f = 1.0f;
    }
}
