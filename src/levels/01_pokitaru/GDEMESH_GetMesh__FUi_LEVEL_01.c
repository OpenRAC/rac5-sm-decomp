/* LEVEL_01:0x085290 -- returns the table entry for an index below 256, otherwise 0. */
extern void *D_0023AEE0[];

void *GDEMESH_GetMesh__FUi(unsigned int index)
{
    if (index < 0x100)
        return D_0023AEE0[index];
    return 0;
}
