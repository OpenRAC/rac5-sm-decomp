/* LEVEL_16:0x1161E0 -- returns the first nonzero entry among four values of an indexed record. */
typedef struct E { int pad; int v[4]; int tail[2]; } E;
extern E D_002DF9B8[];

int func_1161E0(int index)
{
    unsigned int i;
    for (i = 0; i < 4; i++) {
        int value = D_002DF9B8[index].v[i];
        if (value != 0)
            return value;
    }
    return 0;
}
