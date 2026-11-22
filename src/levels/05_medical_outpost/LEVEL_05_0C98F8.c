/* LEVEL_05:0x0C98F8 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
struct Obj {
    int pad[2];
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    unsigned char f1c;
    unsigned char pad1[3];
    int f20;
    int f24;
};

extern int D_001F0984;
extern int D_001F0988;
extern int D_001F0994;
extern int D_001F0998[8];
extern int D_001F0A18[3][6];
extern unsigned char D_001F09C4;
extern int D_001F0A60;
extern struct Obj D_001F09C8;
extern struct Obj D_001F09F0;

extern unsigned int func_085978(int value);
extern int func_0B45C8(int index);
extern void func_019DC0(int a, int b);
extern int func_0BB028(int a0);
extern int func_023E60(int category, int selector);
extern int func_023E88(int x, int y);
extern void func_0B0FE0(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0C98F8(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_085978(0x6B10);
    if (flags & 8) {
        func_0B45C8(7);
        func_019DC0(4, 0);
    } else if (flags & 0x1000) {
        func_0B45C8(7);
        func_0B45C8(0);
        func_0BB028(D_001F0A60 != 0 ? D_001F0A60 : 3);
    } else if (flags & 0x10) {
        func_0B45C8(8);
        D_001F0988--;
        if (D_001F0984 == 5) {
            if (D_001F0988 < 0) {
                D_001F0988 = 1;
            }
        } else {
            if (D_001F0988 < 0) {
                D_001F0988 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0B45C8(8);
        D_001F0988++;
        if (Past(D_001F0988, 2)) {
            D_001F0988 = 0;
        }
        if (D_001F0984 == 5) {
            if (Past(D_001F0988, 1)) {
                D_001F0988 = 0;
            }
        } else {
            if (Past(D_001F0988, 2)) {
                D_001F0988 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0B45C8(8);
        D_001F0984--;
        if (D_001F0988 == 2) {
            if (D_001F0984 < 0) {
                D_001F0984 = 4;
            }
        } else {
            if (D_001F0984 < 0) {
                D_001F0984 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0B45C8(8);
        D_001F0984++;
        if (D_001F0988 == 2) {
            if (Past(D_001F0984, 4)) {
                D_001F0984 = 0;
            }
        } else {
            if (Past(D_001F0984, 5)) {
                D_001F0984 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0B45C8(8);
        D_001F0994++;
        if (Past(D_001F0994, 7)) {
            D_001F0994 = 0;
        }
    } else if (flags & 0x200) {
        func_0B45C8(8);
        D_001F0994--;
        if (D_001F0994 < 0) {
            D_001F0994 = 7;
        }
    } else if (flags & 0x4000) {
        D_001F09C4 = 1;
        sel = D_001F0A18[D_001F0988][D_001F0984];
        if (func_023E60(sel, -1) != 0 && func_023E88(sel, -1) == 0) {
            D_001F0998[D_001F0994] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_001F0994 && D_001F0998[i] == sel) {
                    D_001F0998[i] = 0;
                }
            }
            D_001F0994--;
            if (D_001F0994 < 0) {
                D_001F0994 = 7;
            }
            func_0B45C8(1);
        }
    }
    func_0B0FE0(&D_001F09C8);
    func_0B0FE0(&D_001F09F0);
}
