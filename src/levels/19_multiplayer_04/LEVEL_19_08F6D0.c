typedef struct {
    char pad[0x08];
    float f08;
    float f0C;
} S;

extern S D_001A5860;
extern unsigned char D_001A5870;

void func_08F6D0(float f12, float f13)
{
    D_001A5870 = 1;
    D_001A5860.f08 = f12;
    D_001A5860.f0C = f13;
}
