/* LEVEL_17.REL:0x15E1B8 -- resets the global record D_002D6918 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002D6918;

void func_15E1B8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002D6918.i0 = 0;
            D_002D6918.f3 = 1.0f;
            D_002D6918.i2 = 0;
            D_002D6918.i1 = 0;
        }
    }
}
