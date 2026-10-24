/* LEVEL_23.REL:0x0978B8 -- latches the two caller angles and raises the flag. */
typedef struct {
    char pad0[8];
    float f_08;
    float f_0C;
} Rec;

extern Rec D_001C9B10;
extern signed char D_001C9B20;

void func_0978B8(float a, float b)
{
    D_001C9B20 = 1;
    D_001C9B10.f_08 = a;
    D_001C9B10.f_0C = b;
}
