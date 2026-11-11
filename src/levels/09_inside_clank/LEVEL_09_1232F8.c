/* LEVEL_09:0x1232F8 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_001F0990;
extern int D_00339010[];
extern void func_1234A0(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_1232F8(void *first, void *second)
{
    if (D_001F0990 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_1234A0);
        if (result != 0) {
            D_00339010[D_001F0990] = (int)result;
            D_001F0990++;
        }
    }
}
