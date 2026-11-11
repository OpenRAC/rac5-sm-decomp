/* LEVEL_05:0x125CD8 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_001F5F10;
extern int D_0033D750[];
extern void func_125E80(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_125CD8(void *first, void *second)
{
    if (D_001F5F10 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_125E80);
        if (result != 0) {
            D_0033D750[D_001F5F10] = (int)result;
            D_001F5F10++;
        }
    }
}
