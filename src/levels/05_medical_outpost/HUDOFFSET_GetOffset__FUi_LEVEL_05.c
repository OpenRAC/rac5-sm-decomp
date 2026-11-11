extern int D_001EB6F0;
extern char D_001EB6F8[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_001EB6F8 + D_001EB6F0 * 0x50 + index * 8);
}
