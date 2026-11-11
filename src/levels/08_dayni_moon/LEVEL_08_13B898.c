/* LEVEL_08:0x13B898 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_0024FD50;
extern int D_003A0B10[];
extern void func_13BA40(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_13B898(void *first, void *second)
{
    if (D_0024FD50 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_13BA40);
        if (result != 0) {
            D_003A0B10[D_0024FD50] = (int)result;
            D_0024FD50++;
        }
    }
}
