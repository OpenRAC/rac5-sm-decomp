/* LEVEL_06:0x07E108 -- placement copy of LEVEL_01_085290.c: returns the table entry for an index below 256, otherwise 0. */
extern void *D_00227C60[];

void *GDEMESH_GetMesh__FUi(unsigned int index)
{
    if (index < 0x100)
        return D_00227C60[index];
    return 0;
}
