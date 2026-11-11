extern int D_00245230;
extern char D_00245238[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_00245238 + D_00245230 * 0x50 + index * 8);
}
