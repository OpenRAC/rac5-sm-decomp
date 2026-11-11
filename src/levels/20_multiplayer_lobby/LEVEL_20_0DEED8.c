/* LEVEL_20:0x0DEED8 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_00117080;
extern int D_001C2F80[];
extern void func_0DF080(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_0DEED8(void *first, void *second)
{
    if (D_00117080 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_0DF080);
        if (result != 0) {
            D_001C2F80[D_00117080] = (int)result;
            D_00117080++;
        }
    }
}
