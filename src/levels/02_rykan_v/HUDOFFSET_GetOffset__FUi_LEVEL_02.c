extern int D_00211330;
extern char D_00211338[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_00211338 + D_00211330 * 0x50 + index * 8);
}
