/* LEVEL_04:0x0B7AA0 -- tells whether the first word of a 0x14-byte table entry is nonzero. */
extern int D_00342188[];

int func_0B7AA0(int index)
{
    return D_00342188[index * 5] != 0;
}
