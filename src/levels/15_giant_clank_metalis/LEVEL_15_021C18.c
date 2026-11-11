/* LEVEL_15.REL:0x021C18 -- set global volume, music volume and output mode. */
typedef struct {
    unsigned char pad0[0x18];
    int v_18;
    int v_1C;
    unsigned char pad1[0x30];
    int w_50;
} Obj;

extern Obj *D_00148C2C;
extern void SND_SetGlobalVolume__Ff(float volume);
extern void SND_SetGlobalMusicVolume__Ff(float volume);
extern void SND_SetOutputMode__Fi(int mode);

void func_021C18(void)
{
    SND_SetGlobalVolume__Ff((float)D_00148C2C->v_1C / 255.0f);
    SND_SetGlobalMusicVolume__Ff((float)D_00148C2C->v_18 / 255.0f);
    SND_SetOutputMode__Fi(D_00148C2C->w_50);
}
