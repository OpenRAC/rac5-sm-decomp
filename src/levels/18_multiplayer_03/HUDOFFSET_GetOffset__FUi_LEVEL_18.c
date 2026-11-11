extern int D_001AB870;
extern char D_001AB878[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_001AB878 + D_001AB870 * 0x50 + index * 8);
}
