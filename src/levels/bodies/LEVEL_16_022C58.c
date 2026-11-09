/* LEVEL_16:0x022C58 -- walks a four-by-twenty-five grid, calling helpers per cell and copying one word from a helper result into the cell found. */

struct Cell {
    unsigned char pad00[0x40];
    int w40;
};

struct Src {
    unsigned char pad00[0x38];
    int w38;
};

struct Cell *func_0220C8(int a0, int a1);
void *func_021F50(unsigned int a0, int a1);
struct Src *func_022110(int a0, int a1);

void func_022C58(void)
{
    unsigned int i;
    unsigned int j;
    struct Cell *c;
    struct Src *s;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 25; j++) {
            c = func_0220C8(j, i);
            if (c != 0) {
                if (func_021F50(j, -1) != 0) {
                    s = func_022110(j, i);
                    if (s != 0) {
                        c->w40 = s->w38;
                    }
                }
            }
        }
    }
}
