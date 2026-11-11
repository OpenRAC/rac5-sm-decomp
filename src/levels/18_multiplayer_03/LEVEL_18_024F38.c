/* LEVEL_18.REL:0x024F38 -- set global volume, music volume and output mode. */
typedef struct {
    char pad0[0x18];
    int w_18;
    int w_1C;
    char pad1[0x50 - 0x20];
    int w_50;
} G;

extern G *D_001A2F34;

extern void SND_SetGlobalVolume__Ff(float volume);
extern void SND_SetGlobalMusicVolume__Ff(float volume);
extern void SND_SetOutputMode__Fi(int mode);

void func_024F38(void)
{
    SND_SetGlobalVolume__Ff(D_001A2F34->w_1C / 255.0f);
    SND_SetGlobalMusicVolume__Ff(D_001A2F34->w_18 / 255.0f);
    SND_SetOutputMode__Fi(D_001A2F34->w_50);
}
