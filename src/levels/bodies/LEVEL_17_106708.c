/* LEVEL_17:0x106708 -- placement copy of LEVEL_01_12A360.c: registers a sound signature fixup while the table has room. */
extern int D_001A7FA0;
extern int D_00290A40[];
extern void func_1068B0(void);
extern void *SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    void *, void *, void *);

void func_106708(void *first, void *second)
{
    if (D_001A7FA0 < 0x40) {
        void *result =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                first, second, (void *)func_1068B0);
        if (result != 0) {
            D_00290A40[D_001A7FA0] = (int)result;
            D_001A7FA0++;
        }
    }
}
