/* LEVEL_15.REL:0x153648 -- resets a global record when the index argument is
   the "none" marker 0xFFFF and the pointer argument is not null. */
struct Rec {
    int a;
    int b;
    int c;
    float f;
};

extern struct Rec D_00179A90;

void func_025830(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00179A90.a = 0;
        D_00179A90.b = 0;
        D_00179A90.c = 0;
        D_00179A90.f = 1.0f;
    }
}
