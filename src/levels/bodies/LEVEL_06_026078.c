typedef struct {
    char pad0[0x1C];
    int w1C;
    char pad1[0x48 - 0x20];
    int w48;
} G;

extern G *D_001E2EAC;
extern int D_001E2EB4;

void func_000000(float v);

void func_026078(float scale)
{
    if (D_001E2EAC->w48 < 0) {
        D_001E2EAC->w48 = D_001E2EAC->w1C;
    }
    func_000000((float)D_001E2EAC->w1C / 255.0f * scale);
    D_001E2EB4 = 5;
}
