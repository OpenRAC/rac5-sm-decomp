/* LEVEL_01:0x12A360 -- registers a sound signature fixup while the table has room. */
extern int D_00206E90;
extern int D_00351890[];
extern void func_12A508(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_12A360(void *first, void *second)
{
    if (D_00206E90 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_12A508);
        if (result != 0) {
            D_00351890[D_00206E90] = (int)result;
            D_00206E90++;
        }
    }
}
