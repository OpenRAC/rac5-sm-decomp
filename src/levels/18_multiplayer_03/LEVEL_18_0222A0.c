/* LEVEL_18:0x0222A0 -- placement copy of LEVEL_16_022C58.c: walks a four-by-twenty-five grid, calling helpers per cell and copying one word from a helper result into the cell found. */

struct Cell {
    unsigned char pad00[0x40];
    int w40;
};

struct Src {
    unsigned char pad00[0x38];
    int w38;
};

struct Cell *func_021710(int a0, int a1);
void *func_021598(unsigned int a0, int a1);
struct Src *func_021758(int a0, int a1);

void func_0222A0(void)
{
    unsigned int i;
    unsigned int j;
    struct Cell *c;
    struct Src *s;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 25; j++) {
            c = func_021710(j, i);
            if (c != 0) {
                if (func_021598(j, -1) != 0) {
                    s = func_021758(j, i);
                    if (s != 0) {
                        c->w40 = s->w38;
                    }
                }
            }
        }
    }
}
