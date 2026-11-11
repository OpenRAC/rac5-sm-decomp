extern int D_001AB570;
extern char D_001AB578[];

int HUDOFFSET_GetOffset__FUi(int index)
{
    return (int)(D_001AB578 + D_001AB570 * 0x50 + index * 8);
}
