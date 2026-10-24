/* LEVEL_23.REL:0259C0 -- pushes the level's three colour channels to the shared
   routine, the first two scaled down from 0..255, and the level's handle. */
typedef struct {
    char pad0[0x18];
    int w_18;
    int w_1C;
    char pad1[0x50 - 0x20];
    void *p_50;
} G;

extern G *D_1C73AC;

extern void func_000000(float f);
extern void levelTake(void *a0) __asm__("func_000000");

void func_0259C0(void)
{
    func_000000(D_1C73AC->w_1C / 255.0f);
    func_000000(D_1C73AC->w_18 / 255.0f);
    levelTake(D_1C73AC->p_50);
}
