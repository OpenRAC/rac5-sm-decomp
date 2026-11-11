/* LEVEL_23:0x105258 -- reports which sides of the box the point falls outside
   of. */
typedef struct {
    char pad[0x34];
    float f_34;
    float f_38;
    float f_3C;
    float f_40;
    float f_44;
    float f_48;
} Box;

extern Box *D_1DA1A8;

int func_105258(float *v)
{
    Box *b = D_1DA1A8;
    int flags;

    flags = 0;
    if (v[0] < b->f_34)
        flags = 1;
    if (v[1] < b->f_38)
        flags |= 2;
    if (v[2] < b->f_3C)
        flags |= 4;
    if (b->f_40 < v[0])
        flags |= 8;
    if (b->f_44 < v[1])
        flags |= 0x10;
    if (b->f_48 < v[2])
        flags |= 0x20;
    return flags;
}
