/* LEVEL_16.REL:0x731976 -- resets a global record when the index argument is
   the "none" marker 0xFFFF and the pointer argument is not null. */
struct Rec {
    int a;
    int b;
    int c;
    float f;
};

extern struct Rec D_00276FB0;

void func_0B2B48(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00276FB0.a = 0;
        D_00276FB0.b = 0;
        D_00276FB0.c = 0;
        D_00276FB0.f = 1.0f;
    }
}
