/* LEVEL_04:0x012838 -- initialises two globals: the record D_00249D58 (three
   words and a float) and the float D_00249D68, when the second argument is
   0xFFFF and the first one is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00249D58;
extern float D_00249D68;

void func_012838(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00249D58.f_00 = 0;
            D_00249D58.f_04 = 0;
            D_00249D58.f_08 = 0;
            D_00249D58.f_0C = 1.0f;
            D_00249D68 = 1.0f / 30.0f;
        }
    }
}
