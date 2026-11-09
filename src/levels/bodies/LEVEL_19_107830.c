/* LEVEL_19:0x107830 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_001B5B20;
extern int D_0029F8C0[];
extern void func_1079D8(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_107830(void *first, void *second)
{
    if (D_001B5B20 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_1079D8);
        if (result != 0) {
            D_0029F8C0[D_001B5B20] = (int)result;
            D_001B5B20++;
        }
    }
}
