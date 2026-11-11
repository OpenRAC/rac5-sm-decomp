extern int D_00150FF0;
extern char D_00150FF8[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_00150FF8 + D_00150FF0 * 0x50 + index * 8);
}
