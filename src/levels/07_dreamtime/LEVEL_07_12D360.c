/* LEVEL_07:0x12D360 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_0021B190;
extern int D_00367190[];
extern void func_12D508(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_12D360(void *first, void *second)
{
    if (D_0021B190 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_12D508);
        if (result != 0) {
            D_00367190[D_0021B190] = (int)result;
            D_0021B190++;
        }
    }
}
