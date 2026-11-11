/* LEVEL_20:0x0222B8 -- placement copy of LEVEL_01_027A20.c. */
typedef struct {
    int i00, i04, i08, i0C;
    int i10, i14, i18, i1C;
    char pad[0x48 - 0x20];
    int i48, i4C;
} Ctx;

extern Ctx *D_00104194;
extern int D_001041C0;
extern void SND_SetGlobalVolume__Ff(float volume);
extern void SND_SetGlobalMusicVolume__Ff(float volume);

void func_0222B8(float s)
{
    Ctx *p;

    p = D_00104194;
    if (p->i48 < 0)
        p->i48 = p->i1C;
    SND_SetGlobalVolume__Ff((float)D_00104194->i1C / 255.0f * s);

    p = D_00104194;
    if (p->i4C < 0)
        p->i4C = p->i18;
    SND_SetGlobalMusicVolume__Ff((float)D_00104194->i18 / 255.0f * s);

    D_001041C0 = 5;
}
