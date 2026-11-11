/* LEVEL_15.REL:0x377480 -- resets a global record when the index argument is
   the "none" marker 0xFFFF and the pointer argument is not null. */
struct Rec {
    int a;
    int b;
    int c;
    float f;
};

extern struct Rec D_00181378;

void func_05C288(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00181378.a = 0;
        D_00181378.b = 0;
        D_00181378.c = 0;
        D_00181378.f = 1.0f;
    }
}
