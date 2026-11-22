/* LEVEL_09:0x0C8600 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_001EB404;
extern int D_001EB408;
extern int D_001EB414;
extern int D_001EB418[8];
extern int D_001EB498[3][6];
extern unsigned char D_001EB444;
extern int D_001EB4E0;
extern struct Obj D_001EB448;
extern struct Obj D_001EB470;

extern unsigned int func_0849D8(int value);
extern int func_0B32D0(int index);
extern void func_019C18(int a, int b);
extern int func_0B9D30(int a0);
extern int func_0241C0(int category, int selector);
extern int func_0241E8(int x, int y);
extern void func_0AFCD0(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0C8600(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_0849D8(0x6B10);
    if (flags & 8) {
        func_0B32D0(7);
        func_019C18(4, 0);
    } else if (flags & 0x1000) {
        func_0B32D0(7);
        func_0B32D0(0);
        func_0B9D30(D_001EB4E0 != 0 ? D_001EB4E0 : 3);
    } else if (flags & 0x10) {
        func_0B32D0(8);
        D_001EB408--;
        if (D_001EB404 == 5) {
            if (D_001EB408 < 0) {
                D_001EB408 = 1;
            }
        } else {
            if (D_001EB408 < 0) {
                D_001EB408 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0B32D0(8);
        D_001EB408++;
        if (Past(D_001EB408, 2)) {
            D_001EB408 = 0;
        }
        if (D_001EB404 == 5) {
            if (Past(D_001EB408, 1)) {
                D_001EB408 = 0;
            }
        } else {
            if (Past(D_001EB408, 2)) {
                D_001EB408 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0B32D0(8);
        D_001EB404--;
        if (D_001EB408 == 2) {
            if (D_001EB404 < 0) {
                D_001EB404 = 4;
            }
        } else {
            if (D_001EB404 < 0) {
                D_001EB404 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0B32D0(8);
        D_001EB404++;
        if (D_001EB408 == 2) {
            if (Past(D_001EB404, 4)) {
                D_001EB404 = 0;
            }
        } else {
            if (Past(D_001EB404, 5)) {
                D_001EB404 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0B32D0(8);
        D_001EB414++;
        if (Past(D_001EB414, 7)) {
            D_001EB414 = 0;
        }
    } else if (flags & 0x200) {
        func_0B32D0(8);
        D_001EB414--;
        if (D_001EB414 < 0) {
            D_001EB414 = 7;
        }
    } else if (flags & 0x4000) {
        D_001EB444 = 1;
        sel = D_001EB498[D_001EB408][D_001EB404];
        if (func_0241C0(sel, -1) != 0 && func_0241E8(sel, -1) == 0) {
            D_001EB418[D_001EB414] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_001EB414 && D_001EB418[i] == sel) {
                    D_001EB418[i] = 0;
                }
            }
            D_001EB414--;
            if (D_001EB414 < 0) {
                D_001EB414 = 7;
            }
            func_0B32D0(1);
        }
    }
    func_0AFCD0(&D_001EB448);
    func_0AFCD0(&D_001EB470);
}
