/* LEVEL_19.REL:0x025530 -- set global volume, music volume and output mode. */
typedef struct {
    char pad0[0x18];
    int f_18;
    int f_1C;
    char pad1[0x50 - 0x20];
    int f_50;
} Palette;

extern Palette *D_001A2C34;

extern void SND_SetGlobalVolume__Ff(float volume);
extern void SND_SetGlobalMusicVolume__Ff(float volume);
extern void SND_SetOutputMode__Fi(int mode);

void func_025530(void)
{
    SND_SetGlobalVolume__Ff((float)D_001A2C34->f_1C / 255.0f);
    SND_SetGlobalMusicVolume__Ff((float)D_001A2C34->f_18 / 255.0f);
    SND_SetOutputMode__Fi(D_001A2C34->f_50);
}
