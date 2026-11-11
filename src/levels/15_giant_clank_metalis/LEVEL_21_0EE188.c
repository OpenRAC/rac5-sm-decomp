/* LEVEL_21:0x0EE188 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_0015B810;
extern int D_00268F00[];
extern void func_0EE330(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_0EE188(void *first, void *second)
{
    if (D_0015B810 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_0EE330);
        if (result != 0) {
            D_00268F00[D_0015B810] = (int)result;
            D_0015B810++;
        }
    }
}
