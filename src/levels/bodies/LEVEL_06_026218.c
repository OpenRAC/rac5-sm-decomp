/* LEVEL_06.REL:0x026218 -- set global volume, music volume and output mode. */
typedef struct {
    char pad0[0x18];
    int w_18;
    int w_1C;
    char pad1[0x50 - 0x20];
    int w_50;
} G;

extern G *D_001E2EAC;

extern void SND_SetGlobalVolume__Ff(float volume);
extern void SND_SetGlobalMusicVolume__Ff(float volume);
extern void SND_SetOutputMode__Fi(int mode);

void func_026218(void)
{
    SND_SetGlobalVolume__Ff(D_001E2EAC->w_1C / 255.0f);
    SND_SetGlobalMusicVolume__Ff(D_001E2EAC->w_18 / 255.0f);
    SND_SetOutputMode__Fi(D_001E2EAC->w_50);
}
