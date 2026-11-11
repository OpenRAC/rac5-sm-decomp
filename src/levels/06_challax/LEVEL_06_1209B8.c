/* LEVEL_06:0x1209B8 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_001F5A90;
extern int D_0033E610[];
extern void func_120B60(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_1209B8(void *first, void *second)
{
    if (D_001F5A90 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_120B60);
        if (result != 0) {
            D_0033E610[D_001F5A90] = (int)result;
            D_001F5A90++;
        }
    }
}
