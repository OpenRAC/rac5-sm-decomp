/* LEVEL_20:0x0E8AE0 -- placement copy of LEVEL_16_1161E0.c: returns the first nonzero entry among four values of an indexed record. */
typedef struct E { int pad; int v[4]; int tail[2]; } E;
extern E D_00202F10[];

int func_0E8AE0(int index)
{
    unsigned int i;
    for (i = 0; i < 4; i++) {
        int value = D_00202F10[index].v[i];
        if (value != 0)
            return value;
    }
    return 0;
}
