/* LEVEL_15.REL:0x183048 -- resets a global record when the index argument is
   the "none" marker 0xFFFF and the pointer argument is not null. */
struct Rec {
    int a;
    int b;
    int c;
    float f;
};

extern struct Rec D_0017CD30;

void func_02CB08(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0017CD30.a = 0;
        D_0017CD30.b = 0;
        D_0017CD30.c = 0;
        D_0017CD30.f = 1.0f;
    }
}
