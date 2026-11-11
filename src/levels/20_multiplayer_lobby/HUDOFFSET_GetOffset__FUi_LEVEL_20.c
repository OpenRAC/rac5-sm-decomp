extern int D_0010CAD0;
extern char D_0010CAD8[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_0010CAD8 + D_0010CAD0 * 0x50 + index * 8);
}
