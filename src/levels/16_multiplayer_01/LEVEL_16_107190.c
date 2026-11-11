/* LEVEL_16:0x107190 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_001B49A0;
extern int D_0029F740[];
extern void func_107338(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_107190(void *first, void *second)
{
    if (D_001B49A0 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_107338);
        if (result != 0) {
            D_0029F740[D_001B49A0] = (int)result;
            D_001B49A0++;
        }
    }
}
