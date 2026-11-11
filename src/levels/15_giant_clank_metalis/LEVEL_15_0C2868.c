/* LEVEL_15.REL:0x796776 -- resets a global record when the index argument is
   the "none" marker 0xFFFF and the pointer argument is not null. */
struct Rec {
    int a;
    int b;
    int c;
    float f;
};

extern struct Rec D_00244F88;

void func_0C2868(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00244F88.a = 0;
        D_00244F88.b = 0;
        D_00244F88.c = 0;
        D_00244F88.f = 1.0f;
    }
}
