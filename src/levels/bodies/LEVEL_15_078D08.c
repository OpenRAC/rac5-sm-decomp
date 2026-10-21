/* LEVEL_15:0x078D08 -- resets a global record when the index is the
   "none" marker 0xFFFF and the pointer argument is not null. */
struct Rec {
    int a;
    int b;
    int c;
    float f;
};

extern struct Rec D_001B02C0;

void func_078D08(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_001B02C0.a = 0;
        D_001B02C0.b = 0;
        D_001B02C0.c = 0;
        D_001B02C0.f = 1.0f;
    }
}
