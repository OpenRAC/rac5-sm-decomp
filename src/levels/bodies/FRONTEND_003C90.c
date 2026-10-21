/* FRONTEND:0x003C90 -- indexes a small table. */
extern int D_0002A470[];

int func_003C90(int x, int y)
{
    int k = y + 1;

    if ((unsigned int)x < 0x19 && k >= 0 && k < 2)
        return x * 0x58 + (int)D_0002A470 + k * 0x58;
    return 0;
}
