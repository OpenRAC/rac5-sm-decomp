/* LEVEL_01.REL:0x1A7188 -- resets the global record D_003970B0 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003970B0;

void func_1A7188(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003970B0.i0 = 0;
            D_003970B0.f3 = 1.0f;
            D_003970B0.i2 = 0;
            D_003970B0.i1 = 0;
        }
    }
}
