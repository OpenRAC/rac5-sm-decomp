/* LEVEL_18:0x105E40 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_001B5E20;
extern int D_0029FAC0[];
extern void func_105FE8(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_105E40(void *first, void *second)
{
    if (D_001B5E20 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_105FE8);
        if (result != 0) {
            D_0029FAC0[D_001B5E20] = (int)result;
            D_001B5E20++;
        }
    }
}
