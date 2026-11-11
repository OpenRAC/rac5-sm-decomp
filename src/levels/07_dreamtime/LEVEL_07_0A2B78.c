/* LEVEL_07.REL:0x0A2B78 -- latches the two caller angles and raises the flag. */
typedef struct {
    char pad0[8];
    float f_08;
    float f_0C;
} Rec;

extern Rec D_0020AA10;
extern signed char D_0020AA20;

void func_0A2B78(float a, float b)
{
    D_0020AA20 = 1;
    D_0020AA10.f_08 = a;
    D_0020AA10.f_0C = b;
}
