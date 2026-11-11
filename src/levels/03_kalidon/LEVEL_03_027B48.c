/* LEVEL_03.REL:0x027B48 -- set global volume, music volume and output mode. */
typedef struct {
    char pad0[0x18];
    int w_18;
    int w_1C;
    char pad1[0x50 - 0x20];
    int w_50;
} G;

extern G *D_0020C62C;

extern void SND_SetGlobalVolume__Ff(float volume);
extern void SND_SetGlobalMusicVolume__Ff(float volume);
extern void SND_SetOutputMode__Fi(int mode);

void func_027B48(void)
{
    SND_SetGlobalVolume__Ff(D_0020C62C->w_1C / 255.0f);
    SND_SetGlobalMusicVolume__Ff(D_0020C62C->w_18 / 255.0f);
    SND_SetOutputMode__Fi(D_0020C62C->w_50);
}
