extern int D_00210670;
extern char D_00210678[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_00210678 + D_00210670 * 0x50 + index * 8);
}
