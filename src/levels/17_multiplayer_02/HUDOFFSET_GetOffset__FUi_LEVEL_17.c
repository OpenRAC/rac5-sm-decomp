extern int D_0019D9F0;
extern char D_0019D9F8[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_0019D9F8 + D_0019D9F0 * 0x50 + index * 8);
}
