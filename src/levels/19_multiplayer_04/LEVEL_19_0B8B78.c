/* LEVEL_19:0x0B8B78 -- placement copy of LEVEL_01_0C9ED8.c: maps a pressed d-pad direction and the current index to the next menu index through a per-mode neighbour table. */

struct Pl {
    char pad_00[0x58];
    int w_58;
    char pad_5C[0x6C - 0x5C];
};

extern int D_001B028C;
extern struct Pl D_001B0540[];
extern int D_001B0290[][4];
extern int D_001B0320[][4];
extern int D_001B0370[][4];

int func_0B8B78(int a, unsigned int pad)
{
    struct Pl *p;
    int state;
    int dir;

    p = &D_001B0540[D_001B028C];
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
        return D_001B0320[a][dir];
    }
    if (state == 2) {
        return D_001B0370[a][dir];
    }
    return D_001B0290[a][dir];
}
