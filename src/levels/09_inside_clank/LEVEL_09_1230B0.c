/* LEVEL_09:0x1230B0 -- placement copy of LEVEL_01_12A118.c: picks one of two cached sound-bank slots for a bank id, loading into the next slot when the bank is not resident. */

typedef struct {
    char pad_00[0x7C];
    int id_7C;
} Bank;

typedef void *(*FixupCb)(void *, unsigned int, int, void *);

extern char D_0021C8C0[];
extern int D_001F09A8[2];
extern int D_001F0998[2][2];
extern int D_00339110[2][2];

extern Bank *GLOBALWAD_GetTransitionBank__FUi(unsigned int wad);
extern void snd_UnloadBank(int h);
extern void DelayThread(int t);
extern int snd_FlushSoundCommands(void);
extern int SND_FixupSoundSignaturesIOP__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADERb(unsigned int *p, int id, FixupCb cb, int flag);
extern void *func_1234A0(void *a, unsigned int b, int c, void *d);

void func_1230B0(char *sel, unsigned int *out, unsigned int wad)
{
    int which;
    Bank *bank;
    int id;
    int i;
    int h;
    int r;

    which = sel != D_0021C8C0;
    bank = GLOBALWAD_GetTransitionBank__FUi(wad);
    if (bank == 0) {
        return;
    }
    id = bank->id_7C;
    for (i = 0; i < 2; i++) {
        if (D_00339110[which][i] == id) {
            D_001F09A8[which] = i;
            return;
        }
    }
    D_001F09A8[which] = (D_001F09A8[which] + 1) % 2;
    h = D_001F0998[which][D_001F09A8[which]];
    if (h != 0) {
        snd_UnloadBank(h);
        while (snd_FlushSoundCommands() != 0) {
            DelayThread(800);
        }
    }
    r = SND_FixupSoundSignaturesIOP__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADERb(out, id, func_1234A0, 1);
    D_001F0998[which][D_001F09A8[which]] = r;
    if (r != 0) {
        D_00339110[which][D_001F09A8[which]] = id;
    }
}
