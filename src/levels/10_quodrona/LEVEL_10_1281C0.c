/* LEVEL_10:0x1281C0 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_0020FAF0;
extern int D_0035AC90[];
extern void func_128368(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_1281C0(void *first, void *second)
{
    if (D_0020FAF0 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_128368);
        if (result != 0) {
            D_0035AC90[D_0020FAF0] = (int)result;
            D_0020FAF0++;
        }
    }
}
