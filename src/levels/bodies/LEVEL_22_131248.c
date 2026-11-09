/* LEVEL_22:0x131248 -- returns a scaled table value for a small index, or zero when no table is present. */

struct Tbl {
    char pad_00[0x50];
    unsigned int v[4];
    float w[4];
    char pad_70[0xA0 - 0x70];
    float d;
};

float func_131248(char *a0, unsigned char a1)
{
    struct Tbl *p;

    p = *(struct Tbl **)(a0 + 0x58);
    if (p == 0 || a1 >= 4) {
        return 0.0f;
    }
    return (float)p->v[a1] + p->w[a1] / p->d;
}
