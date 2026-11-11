/* LEVEL_24.REL:0x199928 -- resets the global record D_00362308 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00362308;

void func_199928(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00362308.i0 = 0;
            D_00362308.f3 = 1.0f;
            D_00362308.i2 = 0;
            D_00362308.i1 = 0;
        }
    }
}
