typedef struct {
    char pad0[0x18];
    int w_18;
    int w_1C;
    char pad1[0x50 - 0x20];
    void *p_50;
} G;

extern G *D_001E332C;

extern void func_000000(float f);
extern void levelTake(void *a0) __asm__("func_000000");

void func_026AA8(void)
{
    func_000000(D_001E332C->w_1C / 255.0f);
    func_000000(D_001E332C->w_18 / 255.0f);
    levelTake(D_001E332C->p_50);
}
