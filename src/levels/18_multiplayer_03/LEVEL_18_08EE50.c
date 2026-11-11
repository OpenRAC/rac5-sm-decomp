typedef struct {
    char pad[0x08];
    float f08;
    float f0C;
} S;

extern S D_001A5B60;
extern unsigned char D_001A5B70;

void func_08EE50(float f12, float f13)
{
    D_001A5B70 = 1;
    D_001A5B60.f08 = f12;
    D_001A5B60.f0C = f13;
}
