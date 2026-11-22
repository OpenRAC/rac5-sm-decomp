/* LEVEL_10:0x0CC790 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_0020A604;
extern int D_0020A608;
extern int D_0020A614;
extern int D_0020A618[8];
extern int D_0020A698[3][6];
extern unsigned char D_0020A644;
extern int D_0020A6E0;
extern struct Obj D_0020A648;
extern struct Obj D_0020A670;

extern unsigned int func_088388(int value);
extern int func_0B71F8(int index);
extern void func_019EA8(int a, int b);
extern int func_0BDDD0(int a0);
extern int func_024830(int category, int selector);
extern int func_024858(int x, int y);
extern void func_0B3BF8(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0CC790(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_088388(0x6B10);
    if (flags & 8) {
        func_0B71F8(7);
        func_019EA8(4, 0);
    } else if (flags & 0x1000) {
        func_0B71F8(7);
        func_0B71F8(0);
        func_0BDDD0(D_0020A6E0 != 0 ? D_0020A6E0 : 3);
    } else if (flags & 0x10) {
        func_0B71F8(8);
        D_0020A608--;
        if (D_0020A604 == 5) {
            if (D_0020A608 < 0) {
                D_0020A608 = 1;
            }
        } else {
            if (D_0020A608 < 0) {
                D_0020A608 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0B71F8(8);
        D_0020A608++;
        if (Past(D_0020A608, 2)) {
            D_0020A608 = 0;
        }
        if (D_0020A604 == 5) {
            if (Past(D_0020A608, 1)) {
                D_0020A608 = 0;
            }
        } else {
            if (Past(D_0020A608, 2)) {
                D_0020A608 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0B71F8(8);
        D_0020A604--;
        if (D_0020A608 == 2) {
            if (D_0020A604 < 0) {
                D_0020A604 = 4;
            }
        } else {
            if (D_0020A604 < 0) {
                D_0020A604 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0B71F8(8);
        D_0020A604++;
        if (D_0020A608 == 2) {
            if (Past(D_0020A604, 4)) {
                D_0020A604 = 0;
            }
        } else {
            if (Past(D_0020A604, 5)) {
                D_0020A604 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0B71F8(8);
        D_0020A614++;
        if (Past(D_0020A614, 7)) {
            D_0020A614 = 0;
        }
    } else if (flags & 0x200) {
        func_0B71F8(8);
        D_0020A614--;
        if (D_0020A614 < 0) {
            D_0020A614 = 7;
        }
    } else if (flags & 0x4000) {
        D_0020A644 = 1;
        sel = D_0020A698[D_0020A608][D_0020A604];
        if (func_024830(sel, -1) != 0 && func_024858(sel, -1) == 0) {
            D_0020A618[D_0020A614] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_0020A614 && D_0020A618[i] == sel) {
                    D_0020A618[i] = 0;
                }
            }
            D_0020A614--;
            if (D_0020A614 < 0) {
                D_0020A614 = 7;
            }
            func_0B71F8(1);
        }
    }
    func_0B3BF8(&D_0020A648);
    func_0B3BF8(&D_0020A670);
}
