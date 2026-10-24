/* LEVEL_24.REL:0x14CE78 -- resets the global record D_0035F768 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0035F768;

void func_14CE78(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0035F768.i0 = 0;
            D_0035F768.f3 = 1.0f;
            D_0035F768.i2 = 0;
            D_0035F768.i1 = 0;
        }
    }
}
