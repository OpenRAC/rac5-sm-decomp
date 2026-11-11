extern int D_001EB270;
extern char D_001EB278[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_001EB278 + D_001EB270 * 0x50 + index * 8);
}
