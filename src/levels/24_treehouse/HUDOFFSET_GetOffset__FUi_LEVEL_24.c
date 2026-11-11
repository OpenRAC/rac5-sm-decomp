extern int D_001CCFF0;
extern char D_001CCFF8[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_001CCFF8 + D_001CCFF0 * 0x50 + index * 8);
}
