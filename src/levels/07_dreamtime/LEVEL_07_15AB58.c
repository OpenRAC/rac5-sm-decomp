/* LEVEL_07:0x15AB58 -- initialises two globals: the record D_003A9208 (three
   words and a float) and the float D_003A9218, when the second argument is
   0xFFFF and the first one is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003A9208;
extern float D_003A9218;

void func_15AB58(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003A9208.f_00 = 0;
            D_003A9208.f_04 = 0;
            D_003A9208.f_08 = 0;
            D_003A9208.f_0C = 1.0f;
            D_003A9218 = 0.36f;
        }
    }
}
