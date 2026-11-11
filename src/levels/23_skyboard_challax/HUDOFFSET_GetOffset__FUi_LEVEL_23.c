extern int D_001CF770;
extern char D_001CF778[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_001CF778 + D_001CF770 * 0x50 + index * 8);
}
