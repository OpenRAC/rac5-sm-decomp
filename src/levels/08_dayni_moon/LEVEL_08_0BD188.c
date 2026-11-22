/* LEVEL_08:0x0BD188 -- placement copy of LEVEL_04_0B7AA0.c: tells whether the first word of a 0x14-byte table entry is nonzero. */
extern int D_00376C08[];

int func_0BD188(int index)
{
    return D_00376C08[index * 5] != 0;
}
