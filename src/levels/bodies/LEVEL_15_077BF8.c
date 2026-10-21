/* LEVEL_15.REL:0x490488 -- resets a global record when the index argument is
   the "none" marker 0xFFFF and the pointer argument is not null. */
struct Rec {
    int a;
    int b;
    int c;
    float f;
};

extern struct Rec D_001B0130;

void func_077BF8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_001B0130.a = 0;
        D_001B0130.b = 0;
        D_001B0130.c = 0;
        D_001B0130.f = 1.0f;
    }
}
