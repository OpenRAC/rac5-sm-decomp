/* LEVEL_19.REL:0x113F98 -- resets the global record D_002DF768 when the second
   argument is 0xFFFF and the first is not null. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002DF768;

void func_113F98(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002DF768.i0 = 0;
            D_002DF768.f3 = 1.0f;
            D_002DF768.i2 = 0;
            D_002DF768.i1 = 0;
        }
    }
}
