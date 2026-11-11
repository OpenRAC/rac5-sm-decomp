extern int D_001AA3F0;
extern char D_001AA3F8[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_001AA3F8 + D_001AA3F0 * 0x50 + index * 8);
}
