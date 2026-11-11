/* LEVEL_04:0x1367E0 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_002202B0;
extern int D_0036C090[];
extern void func_136988(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_1367E0(void *first, void *second)
{
    if (D_002202B0 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_136988);
        if (result != 0) {
            D_0036C090[D_002202B0] = (int)result;
            D_002202B0++;
        }
    }
}
