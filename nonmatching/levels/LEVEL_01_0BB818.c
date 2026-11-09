/* LEVEL_01.REL:0x0BB818: reviewed 168-byte candidate, held for ABI review.
 * Resets the audio and game-state object, pausing sound channels and clearing
 * counters.
 * pinned C with gnu-ee-trial links 168/168 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_19DB08 returning void with (int, int), but the accepted
 * LEVEL_01_19DB08.c defines it returning void with (pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_00328A30[];
extern char D_00235140[];
extern int D_001FCA08;
extern int D_001FCA14;
extern unsigned char D_001F45E9;
extern void func_0CA018(int a);
extern void func_023B90(char *a, int b);
extern void func_0BC590(void);
extern void func_0BC4D0(void);
extern void SND_PausePositionalSounds(int a) __asm__("SND_PausePositionalSounds__Fb");
extern int SND_PauseAtrac(int a, int b) __asm__("SND_PauseAtrac__Fbi");
extern void func_0BB7B8(void);
extern void func_19DB08(int a, int b);
extern void func_133CC8(void);

void func_0BB818(void)
{
    char *s0;
    int *gp;

    s0 = D_00328A30;
    if (*(int *)(s0 + 0x10) != 1) {
        func_0CA018(0x14);
    }
    func_023B90(D_00235140, D_001FCA08);
    func_0BC590();
    func_0BC4D0();
    SND_PausePositionalSounds(0);
    SND_PauseAtrac(0, -1);
    gp = &D_001FCA14;
    *gp = 0;
    func_0BB7B8();
    *(int *)(s0 + 4) = 0;
    if (D_001F45E9 != 0) {
        func_19DB08(1, 1);
    }
    func_133CC8();
    *(int *)(s0 + 0x58) = 0;
}
