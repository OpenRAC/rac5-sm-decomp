/* LEVEL_23:0x11B1D8 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_001DA290;
extern int D_00322CD0[];
extern void func_11B380(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_11B1D8(void *first, void *second)
{
    if (D_001DA290 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_11B380);
        if (result != 0) {
            D_00322CD0[D_001DA290] = (int)result;
            D_001DA290++;
        }
    }
}
