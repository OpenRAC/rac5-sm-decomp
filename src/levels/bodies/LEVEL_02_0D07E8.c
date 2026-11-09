/* LEVEL_02:0x0D07E8 -- placement copy of LEVEL_01_0C9ED8.c: maps a pressed d-pad direction and the current index to the next menu index through a per-mode neighbour table. */

struct Pl {
    char pad_00[0x58];
    int w_58;
    char pad_5C[0x6C - 0x5C];
};

extern int D_00216224;
extern struct Pl D_002164D8[];
extern int D_00216228[][4];
extern int D_002162B8[][4];
extern int D_00216308[][4];

int func_0D07E8(int a, unsigned int pad)
{
    struct Pl *p;
    int state;
    int dir;

    p = &D_002164D8[D_00216224];
    if ((pad & 0xF0) == 0) {
        return a;
    }
    state = p->w_58;
    if ((state == 0 && a >= 8) || (state == 1 && a >= 4) || (state == 2 && a >= 4)) {
        return -1;
    }
    dir = -1;
    if (pad & 0x20) {
        dir = 0;
    } else if (pad & 0x10) {
        dir = 1;
    } else if (pad & 0x80) {
        dir = 2;
    } else if (pad & 0x40) {
        dir = 3;
    }
    if (a == -1) {
        if (state != 1) {
            a = 8;
            if (state == 2) {
                a = 4;
            }
        } else {
            a = 4;
        }
    }
    if (state == 1) {
        return D_002162B8[a][dir];
    }
    if (state == 2) {
        return D_00216308[a][dir];
    }
    return D_00216228[a][dir];
}
