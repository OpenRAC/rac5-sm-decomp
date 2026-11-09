/* FRONTEND.REL:0x0145C8: reviewed 100-byte candidate, held for ABI review.
 * Plays a global sound picked by index, returns nonzero on play.
 * sdk991111 C with gnu-ee-trial links 100/100 bytes and is byte-exact at this
 * and 20 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (int), but the accepted caller
 * FRONTEND_01B898.c declares it returning void with (int).
 * It defines the function returning int with (int), but the accepted caller
 * FRONTEND_01B8C0.c declares it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
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
