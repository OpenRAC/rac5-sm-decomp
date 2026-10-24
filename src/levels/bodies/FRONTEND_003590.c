/* FRONTEND.REL:003590 -- pushes the level's three colour channels to the shared
   routine, the first two scaled down from 0..255, and the level's handle. */
typedef struct {
    char pad0[0x18];
    int w_18;
    int w_1C;
    char pad1[0x50 - 0x20];
    void *p_50;
} G;

extern G *D_027E9C;

extern void func_000000(float f);
extern void levelTake(void *a0) __asm__("func_000000");

void func_003590(void)
{
    func_000000(D_027E9C->w_1C / 255.0f);
    func_000000(D_027E9C->w_18 / 255.0f);
    levelTake(D_027E9C->p_50);
}
