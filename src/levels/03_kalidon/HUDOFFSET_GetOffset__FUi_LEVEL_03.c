extern int D_002149F0;
extern char D_002149F8[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_002149F8 + D_002149F0 * 0x50 + index * 8);
}
