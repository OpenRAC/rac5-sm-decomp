extern int D_00215830;
extern char D_00215838[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_00215838 + D_00215830 * 0x50 + index * 8);
}
