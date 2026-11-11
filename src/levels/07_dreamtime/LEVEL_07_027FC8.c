/* LEVEL_07.REL:0x027FC8 -- set global volume, music volume and output mode. */
typedef struct {
    char pad0[0x18];
    int f_18;
    int f_1C;
    char pad1[0x50 - 0x20];
    int f_50;
} Palette;

extern Palette *D_002082AC;

extern void SND_SetGlobalVolume__Ff(float volume);
extern void SND_SetGlobalMusicVolume__Ff(float volume);
extern void SND_SetOutputMode__Fi(int mode);

void func_027FC8(void)
{
    SND_SetGlobalVolume__Ff((float)D_002082AC->f_1C / 255.0f);
    SND_SetGlobalMusicVolume__Ff((float)D_002082AC->f_18 / 255.0f);
    SND_SetOutputMode__Fi(D_002082AC->f_50);
}
