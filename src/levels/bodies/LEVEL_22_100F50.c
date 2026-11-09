/* LEVEL_22:0x100F50 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_00165E70;
extern int D_002A7280[];
extern void func_1010F8(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_100F50(void *first, void *second)
{
    if (D_00165E70 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_1010F8);
        if (result != 0) {
            D_002A7280[D_00165E70] = (int)result;
            D_00165E70++;
        }
    }
}
