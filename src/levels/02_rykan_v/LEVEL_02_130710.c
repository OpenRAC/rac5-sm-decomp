/* LEVEL_02:0x130710 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_0021BE50;
extern int D_00368D90[];
extern void func_1308B8(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_130710(void *first, void *second)
{
    if (D_0021BE50 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_1308B8);
        if (result != 0) {
            D_00368D90[D_0021BE50] = (int)result;
            D_0021BE50++;
        }
    }
}
