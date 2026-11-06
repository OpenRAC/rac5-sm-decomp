/* FRONTEND.REL:0x0145C8: Ghidra body 100 bytes.
 * Pinned pure C links 104 bytes and first differs at +8.
 * Recheck named sound-play ABI and indexed global input. No matching credit.
 */
extern void *GLOBALWAD_FindGlobalSound__FUi(unsigned int);
extern int SND_Play__FP9GDE_SoundffPP14SND_PositionalUi(
    void *, float, float, void **, unsigned int);
extern unsigned int D_0012D2D0[];
extern unsigned int D_00027EA8;

int func_0145C8(int index)
{
    void *sound;
    if (index == 0) {
        return 0;
    }
    sound = GLOBALWAD_FindGlobalSound__FUi(D_0012D2D0[index]);
    if (sound == 0) {
        return 0;
    }
    return SND_Play__FP9GDE_SoundffPP14SND_PositionalUi(
               sound, 0.25f, 1.0f, 0, D_00027EA8) != 0;
}
