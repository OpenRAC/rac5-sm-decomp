/* LEVEL_09:170C00 -- resets the global record D_0037D658: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0037D658;

void func_170C00(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037D658.f_00 = 0;
            D_0037D658.f_0C = 1.0f;
            D_0037D658.f_08 = 0;
            D_0037D658.f_04 = 0;
        }
    }
}
