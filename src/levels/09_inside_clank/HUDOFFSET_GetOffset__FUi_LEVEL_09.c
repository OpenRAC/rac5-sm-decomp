extern int D_001E6170;
extern char D_001E6178[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_001E6178 + D_001E6170 * 0x50 + index * 8);
}
