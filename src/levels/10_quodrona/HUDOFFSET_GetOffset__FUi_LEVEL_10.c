extern int D_00205370;
extern char D_00205378[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_00205378 + D_00205370 * 0x50 + index * 8);
}
