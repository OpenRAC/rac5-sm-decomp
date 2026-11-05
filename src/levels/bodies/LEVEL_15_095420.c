extern int D_00150FF0;
extern char D_00150FF8[];

int func_095420(int index)
{
    return (int)(D_00150FF8 + D_00150FF0 * 0x50 + index * 8);
}
