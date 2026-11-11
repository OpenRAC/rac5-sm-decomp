/* LEVEL_24:0x11FE60 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_001D7B10;
extern int D_0031D750[];
extern void func_120008(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_11FE60(void *first, void *second)
{
    if (D_001D7B10 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_120008);
        if (result != 0) {
            D_0031D750[D_001D7B10] = (int)result;
            D_001D7B10++;
        }
    }
}
