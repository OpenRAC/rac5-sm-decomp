/* LEVEL_15.REL:0x168080 -- resets a global record when the index argument is
   the "none" marker 0xFFFF and the pointer argument is not null. */
struct Rec {
    int a;
    int b;
    int c;
    float f;
};

extern struct Rec D_0017B1D0;

void func_029090(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0017B1D0.a = 0;
        D_0017B1D0.b = 0;
        D_0017B1D0.c = 0;
        D_0017B1D0.f = 1.0f;
    }
}
