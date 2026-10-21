/* LEVEL_02.REL:0x1947440 -- resets a global record when the index argument is
   the "none" marker 0xFFFF and the pointer argument is not null. */
struct Rec {
    int a;
    int b;
    int c;
    float f;
};

extern struct Rec D_003B06E8;

void func_1DB730(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003B06E8.a = 0;
        D_003B06E8.b = 0;
        D_003B06E8.c = 0;
        D_003B06E8.f = 1.0f;
    }
}
