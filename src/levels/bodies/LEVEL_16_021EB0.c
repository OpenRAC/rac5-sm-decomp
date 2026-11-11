/* LEVEL_16:0x021EB0 -- validates two indices and a value, then stores the value into a 2-D record table. */

struct Cell021EB0 {
    char pad00[0x3C];
    unsigned int f3C;
    char pad40[0x54 - 0x40];
};

extern struct Cell021EB0 D_0019F078[25][5];

int func_021EB0(unsigned int a0, unsigned int a1, int a2)
{
    unsigned int val;
    int col;

    val = a1;
    col = a2 + 1;
    if (a0 < 25 && val < 8 && col >= 0 && col < 6) {
        D_0019F078[a0][col].f3C = val;
        return 1;
    }
    return 0;
}
