/* LEVEL_19:0x022898 -- placement copy of LEVEL_16_022C58.c: walks a four-by-twenty-five grid, calling helpers per cell and copying one word from a helper result into the cell found. */

struct Cell {
    unsigned char pad00[0x40];
    int w40;
};

struct Src {
    unsigned char pad00[0x38];
    int w38;
};

struct Cell *func_021D08(int a0, int a1);
void *func_021B90(unsigned int a0, int a1);
struct Src *func_021D50(int a0, int a1);

void func_022898(void)
{
    unsigned int i;
    unsigned int j;
    struct Cell *c;
    struct Src *s;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 25; j++) {
            c = func_021D08(j, i);
            if (c != 0) {
                if (func_021B90(j, -1) != 0) {
                    s = func_021D50(j, i);
                    if (s != 0) {
                        c->w40 = s->w38;
                    }
                }
            }
        }
    }
}
