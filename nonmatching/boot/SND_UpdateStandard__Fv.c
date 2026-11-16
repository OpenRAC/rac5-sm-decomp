/*
 * SND_UpdateStandard__Fv
 * USA boot (SCUS_976.15), retail 0x01E91200, body 96 bytes (0x01E91200..0x01E91260).
 *
 * Per-frame update of the standard sound path: stores 2 in the state word at
 * 0x01FD1980, updates each of the 64 positional sound records of `gSounds`
 * (0x58 bytes each, the layout src/boot/SND_PausePositionalSounds__Fb.c uses)
 * through the unnamed function at 0x01E92B40, then calls SND_UpdateATRAC__Fv
 * and returns 1. The retail loop test is a signed compare: an `int` index
 * reproduces it, a pointer walk gives an unsigned compare and another prologue
 * order.
 *
 * Profile: pinned chain (cpp, cc1 -quiet -O2 -G0, as), built by
 * tools/compiler/build_gnu_ee.sh; those rebuilt binaries are not hash-identical
 * to the pins. Measured 13 November 2026: the compiled .text is 96 bytes and
 * equals the retail body once its six relocations are resolved to the retail
 * addresses of the four symbols below.
 *
 * Exact but unaccepted witness. Missing: evidence for the return type and for
 * the prototype of the unnamed callee beyond this call site, the campaign
 * integration and the qualifying gate with pinned tools.
 */
typedef struct {
    char _bytes[0x58];
} SND_Positional;

extern int D_01FD1980;
extern SND_Positional gSounds[];
extern void func_1E92B40(SND_Positional *sound);
extern void SND_UpdateATRAC__Fv(void);

int SND_UpdateStandard__Fv(void)
{
    int i;

    D_01FD1980 = 2;
    for (i = 0; i < 64; i++)
        func_1E92B40(&gSounds[i]);
    SND_UpdateATRAC__Fv();
    return 1;
}
