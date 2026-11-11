/* LEVEL_20:0x064980 -- placement copy of LEVEL_01_085290.c: returns the table entry for an index below 256, otherwise 0. */
extern void *D_00144BE0[];

void *GDEMESH_GetMesh__FUi(unsigned int index)
{
    if (index < 0x100)
        return D_00144BE0[index];
    return 0;
}
