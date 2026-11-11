/* LEVEL_17:0x077788 -- placement copy of LEVEL_01_085290.c: returns the table entry for an index below 256, otherwise 0. */
extern void *D_001E2670[];

void *GDEMESH_GetMesh__FUi(unsigned int index)
{
    if (index < 0x100)
        return D_001E2670[index];
    return 0;
}
