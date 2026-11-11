extern int D_0015B6F0;
extern char D_0015B6F8[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_0015B6F8 + D_0015B6F0 * 0x50 + index * 8);
}
