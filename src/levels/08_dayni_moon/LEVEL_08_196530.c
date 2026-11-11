/* LEVEL_08:196530 -- clears the global record D_003E6CA8 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003E6CA8;

void func_196530(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003E6CA8.f_00 = 0;
            D_003E6CA8.f_0C = 1.0f;
            D_003E6CA8.f_08 = 0;
            D_003E6CA8.f_04 = 0;
        }
    }
}
