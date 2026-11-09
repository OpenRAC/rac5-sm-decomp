/* LEVEL_16:0x106F48 -- placement copy of LEVEL_01_12A118.c: picks one of two cached sound-bank slots for a bank id, loading into the next slot when the bank is not resident. */

typedef struct {
    char pad_00[0x7C];
    int id_7C;
} Bank;

typedef void *(*FixupCb)(void *, unsigned int, int, void *);

extern char D_001E4090[];
extern int D_001B49B8[2];
extern int D_001B49A8[2][2];
extern int D_0029F840[2][2];

extern Bank *GLOBALWAD_GetTransitionBank__FUi(unsigned int wad);
extern void snd_UnloadBank(int h);
extern void DelayThread(int t);
extern int snd_FlushSoundCommands(void);
extern int SND_FixupSoundSignaturesIOP__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADERb(unsigned int *p, int id, FixupCb cb, int flag);
extern void *func_107338(void *a, unsigned int b, int c, void *d);

void func_106F48(char *sel, unsigned int *out, unsigned int wad)
{
    int which;
    Bank *bank;
    int id;
    int i;
    int h;
    int r;

    which = sel != D_001E4090;
    bank = GLOBALWAD_GetTransitionBank__FUi(wad);
    if (bank == 0) {
        return;
    }
    id = bank->id_7C;
    for (i = 0; i < 2; i++) {
        if (D_0029F840[which][i] == id) {
            D_001B49B8[which] = i;
            return;
        }
    }
    D_001B49B8[which] = (D_001B49B8[which] + 1) % 2;
    h = D_001B49A8[which][D_001B49B8[which]];
    if (h != 0) {
        snd_UnloadBank(h);
        while (snd_FlushSoundCommands() != 0) {
            DelayThread(800);
        }
    }
    r = SND_FixupSoundSignaturesIOP__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADERb(out, id, func_107338, 1);
    D_001B49A8[which][D_001B49B8[which]] = r;
    if (r != 0) {
        D_0029F840[which][D_001B49B8[which]] = id;
    }
}
