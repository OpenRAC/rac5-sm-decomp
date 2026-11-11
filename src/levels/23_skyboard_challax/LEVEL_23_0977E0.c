/* LEVEL_23:0x0977E0 -- arms the shared pair and its flag. */
typedef struct {
    float f_00;
    float f_04;
} V;

extern V D_001C9B10;
extern unsigned char D_001C9B20;

void func_0977E0(float a, float b)
{
    D_001C9B20 = 1;
    D_001C9B10.f_00 = a;
    D_001C9B10.f_04 = b;
}
