typedef struct {
    int i00, i04, i08, i0C;
    int i10, i14, i18, i1C;
    char pad[0x48 - 0x20];
    int i48, i4C;
} Ctx;

extern Ctx *D_001DDDAC;
extern int D_001DDDB4;
extern void SND_SetGlobalVolume__Ff(float volume);
extern void SND_SetGlobalMusicVolume__Ff(float volume);

void func_026A28(float s)
{
    Ctx *p;

    p = D_001DDDAC;
    if (p->i48 < 0)
        p->i48 = p->i1C;
    SND_SetGlobalVolume__Ff((float)D_001DDDAC->i1C / 255.0f * s);

    p = D_001DDDAC;
    if (p->i4C < 0)
        p->i4C = p->i18;
    SND_SetGlobalMusicVolume__Ff((float)D_001DDDAC->i18 / 255.0f * s);

    D_001DDDB4 = 5;
}
