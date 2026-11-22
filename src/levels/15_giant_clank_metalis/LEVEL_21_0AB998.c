/* LEVEL_21:0x0AB998 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_00156284;
extern int D_00156288;
extern int D_00156294;
extern int D_00156298[8];
extern int D_00156318[3][6];
extern unsigned char D_001562C4;
extern int D_00156360;
extern struct Obj D_001562C8;
extern struct Obj D_001562F0;

extern unsigned int func_06C700(int value);
extern int func_096530(int index);
extern void func_016A10(int a, int b);
extern int func_09D0C8(int a0);
extern int func_01F230(int category, int selector);
extern int func_01F258(int x, int y);
extern void func_0932E8(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0AB998(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_06C700(0x6B10);
    if (flags & 8) {
        func_096530(7);
        func_016A10(4, 0);
    } else if (flags & 0x1000) {
        func_096530(7);
        func_096530(0);
        func_09D0C8(D_00156360 != 0 ? D_00156360 : 3);
    } else if (flags & 0x10) {
        func_096530(8);
        D_00156288--;
        if (D_00156284 == 5) {
            if (D_00156288 < 0) {
                D_00156288 = 1;
            }
        } else {
            if (D_00156288 < 0) {
                D_00156288 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_096530(8);
        D_00156288++;
        if (Past(D_00156288, 2)) {
            D_00156288 = 0;
        }
        if (D_00156284 == 5) {
            if (Past(D_00156288, 1)) {
                D_00156288 = 0;
            }
        } else {
            if (Past(D_00156288, 2)) {
                D_00156288 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_096530(8);
        D_00156284--;
        if (D_00156288 == 2) {
            if (D_00156284 < 0) {
                D_00156284 = 4;
            }
        } else {
            if (D_00156284 < 0) {
                D_00156284 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_096530(8);
        D_00156284++;
        if (D_00156288 == 2) {
            if (Past(D_00156284, 4)) {
                D_00156284 = 0;
            }
        } else {
            if (Past(D_00156284, 5)) {
                D_00156284 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_096530(8);
        D_00156294++;
        if (Past(D_00156294, 7)) {
            D_00156294 = 0;
        }
    } else if (flags & 0x200) {
        func_096530(8);
        D_00156294--;
        if (D_00156294 < 0) {
            D_00156294 = 7;
        }
    } else if (flags & 0x4000) {
        D_001562C4 = 1;
        sel = D_00156318[D_00156288][D_00156284];
        if (func_01F230(sel, -1) != 0 && func_01F258(sel, -1) == 0) {
            D_00156298[D_00156294] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_00156294 && D_00156298[i] == sel) {
                    D_00156298[i] = 0;
                }
            }
            D_00156294--;
            if (D_00156294 < 0) {
                D_00156294 = 7;
            }
            func_096530(1);
        }
    }
    func_0932E8(&D_001562C8);
    func_0932E8(&D_001562F0);
}
