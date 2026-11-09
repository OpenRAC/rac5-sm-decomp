/* LEVEL_03:0x1285C8 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_0021F510;
extern int D_0036C710[];
extern void func_128770(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_1285C8(void *first, void *second)
{
    if (D_0021F510 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_128770);
        if (result != 0) {
            D_0036C710[D_0021F510] = (int)result;
            D_0021F510++;
        }
    }
}
