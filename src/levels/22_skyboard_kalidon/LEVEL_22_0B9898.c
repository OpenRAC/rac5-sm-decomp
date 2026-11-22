/* LEVEL_22:0x0B9898 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_00160984;
extern int D_00160988;
extern int D_00160994;
extern int D_00160998[8];
extern int D_00160A18[3][6];
extern unsigned char D_001609C4;
extern int D_00160A60;
extern struct Obj D_001609C8;
extern struct Obj D_001609F0;

extern unsigned int func_079438(int value);
extern int func_0A4570(int index);
extern void func_016E40(int a, int b);
extern int func_0AAF30(int a0);
extern int func_01FD00(int category, int selector);
extern int func_01FD28(int x, int y);
extern void func_0A10A0(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0B9898(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_079438(0x6B10);
    if (flags & 8) {
        func_0A4570(7);
        func_016E40(4, 0);
    } else if (flags & 0x1000) {
        func_0A4570(7);
        func_0A4570(0);
        func_0AAF30(D_00160A60 != 0 ? D_00160A60 : 3);
    } else if (flags & 0x10) {
        func_0A4570(8);
        D_00160988--;
        if (D_00160984 == 5) {
            if (D_00160988 < 0) {
                D_00160988 = 1;
            }
        } else {
            if (D_00160988 < 0) {
                D_00160988 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0A4570(8);
        D_00160988++;
        if (Past(D_00160988, 2)) {
            D_00160988 = 0;
        }
        if (D_00160984 == 5) {
            if (Past(D_00160988, 1)) {
                D_00160988 = 0;
            }
        } else {
            if (Past(D_00160988, 2)) {
                D_00160988 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0A4570(8);
        D_00160984--;
        if (D_00160988 == 2) {
            if (D_00160984 < 0) {
                D_00160984 = 4;
            }
        } else {
            if (D_00160984 < 0) {
                D_00160984 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0A4570(8);
        D_00160984++;
        if (D_00160988 == 2) {
            if (Past(D_00160984, 4)) {
                D_00160984 = 0;
            }
        } else {
            if (Past(D_00160984, 5)) {
                D_00160984 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0A4570(8);
        D_00160994++;
        if (Past(D_00160994, 7)) {
            D_00160994 = 0;
        }
    } else if (flags & 0x200) {
        func_0A4570(8);
        D_00160994--;
        if (D_00160994 < 0) {
            D_00160994 = 7;
        }
    } else if (flags & 0x4000) {
        D_001609C4 = 1;
        sel = D_00160A18[D_00160988][D_00160984];
        if (func_01FD00(sel, -1) != 0 && func_01FD28(sel, -1) == 0) {
            D_00160998[D_00160994] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_00160994 && D_00160998[i] == sel) {
                    D_00160998[i] = 0;
                }
            }
            D_00160994--;
            if (D_00160994 < 0) {
                D_00160994 = 7;
            }
            func_0A4570(1);
        }
    }
    func_0A10A0(&D_001609C8);
    func_0A10A0(&D_001609F0);
}
