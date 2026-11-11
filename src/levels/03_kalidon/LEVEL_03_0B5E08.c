/* LEVEL_03:0x0B5E08 -- placement copy of FRONTEND_0145C8.c: plays a global sound picked by index, returns nonzero on play. */
extern void *GLOBALWAD_FindGlobalSound__FUi(unsigned int);
extern int SND_Play__FP9GDE_SoundffPP14SND_PositionalUi(
    void *, float, float, void **, unsigned int);
extern unsigned int D_00343470[];
extern unsigned int D_0020C638;

int func_0B5E08(int index)
{
    void *sound;
    if (index == 0) {
        return 0;
    }
    sound = GLOBALWAD_FindGlobalSound__FUi(D_00343470[index]);
    if (sound == 0) {
        return 0;
    }
    return SND_Play__FP9GDE_SoundffPP14SND_PositionalUi(
               sound, 0.25f, 1.0f, 0, D_0020C638) != 0;
}
