/* LEVEL_15.REL:0x791792 -- resets a global record when the index argument is
   the "none" marker 0xFFFF and the pointer argument is not null. */
struct Rec {
    int a;
    int b;
    int c;
    float f;
};

extern struct Rec D_00244F48;

void func_0C14F0(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00244F48.a = 0;
        D_00244F48.b = 0;
        D_00244F48.c = 0;
        D_00244F48.f = 1.0f;
    }
}
