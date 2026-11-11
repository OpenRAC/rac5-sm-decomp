extern int D_001FC370;
extern char D_001FC378[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_001FC378 + D_001FC370 * 0x50 + index * 8);
}
