/* SND_UpdateStandard__Fv 0x01E91200 -- marks the standard path, updates the 64 positional sounds, then ATRAC. */
typedef struct {
    char _bytes[0x58];
} SND_Positional;

extern int D_01FD1980;
extern SND_Positional gSounds[];
extern void func_01E92B40(SND_Positional *sound);
extern void SND_UpdateATRAC__Fv(void);

int SND_UpdateStandard__Fv(void)
{
    int i;

    D_01FD1980 = 2;
    for (i = 0; i < 64; i++)
        func_01E92B40(&gSounds[i]);
    SND_UpdateATRAC__Fv();
    return 1;
}
