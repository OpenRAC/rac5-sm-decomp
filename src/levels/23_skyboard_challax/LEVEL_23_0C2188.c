/* LEVEL_23:0x0C2188 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_001D4A04;
extern int D_001D4A08;
extern int D_001D4A14;
extern int D_001D4A18[8];
extern int D_001D4A98[3][6];
extern unsigned char D_001D4A44;
extern int D_001D4AE0;
extern struct Obj D_001D4A48;
extern struct Obj D_001D4A70;

extern unsigned int func_07DEE0(int value);
extern int func_0ACDE8(int index);
extern void func_019338(int a, int b);
extern int func_0B3820(int a0);
extern int func_022F68(int category, int selector);
extern int func_022F90(int x, int y);
extern void func_0A9800(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0C2188(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_07DEE0(0x6B10);
    if (flags & 8) {
        func_0ACDE8(7);
        func_019338(4, 0);
    } else if (flags & 0x1000) {
        func_0ACDE8(7);
        func_0ACDE8(0);
        func_0B3820(D_001D4AE0 != 0 ? D_001D4AE0 : 3);
    } else if (flags & 0x10) {
        func_0ACDE8(8);
        D_001D4A08--;
        if (D_001D4A04 == 5) {
            if (D_001D4A08 < 0) {
                D_001D4A08 = 1;
            }
        } else {
            if (D_001D4A08 < 0) {
                D_001D4A08 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0ACDE8(8);
        D_001D4A08++;
        if (Past(D_001D4A08, 2)) {
            D_001D4A08 = 0;
        }
        if (D_001D4A04 == 5) {
            if (Past(D_001D4A08, 1)) {
                D_001D4A08 = 0;
            }
        } else {
            if (Past(D_001D4A08, 2)) {
                D_001D4A08 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0ACDE8(8);
        D_001D4A04--;
        if (D_001D4A08 == 2) {
            if (D_001D4A04 < 0) {
                D_001D4A04 = 4;
            }
        } else {
            if (D_001D4A04 < 0) {
                D_001D4A04 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0ACDE8(8);
        D_001D4A04++;
        if (D_001D4A08 == 2) {
            if (Past(D_001D4A04, 4)) {
                D_001D4A04 = 0;
            }
        } else {
            if (Past(D_001D4A04, 5)) {
                D_001D4A04 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0ACDE8(8);
        D_001D4A14++;
        if (Past(D_001D4A14, 7)) {
            D_001D4A14 = 0;
        }
    } else if (flags & 0x200) {
        func_0ACDE8(8);
        D_001D4A14--;
        if (D_001D4A14 < 0) {
            D_001D4A14 = 7;
        }
    } else if (flags & 0x4000) {
        D_001D4A44 = 1;
        sel = D_001D4A98[D_001D4A08][D_001D4A04];
        if (func_022F68(sel, -1) != 0 && func_022F90(sel, -1) == 0) {
            D_001D4A18[D_001D4A14] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_001D4A14 && D_001D4A18[i] == sel) {
                    D_001D4A18[i] = 0;
                }
            }
            D_001D4A14--;
            if (D_001D4A14 < 0) {
                D_001D4A14 = 7;
            }
            func_0ACDE8(1);
        }
    }
    func_0A9800(&D_001D4A48);
    func_0A9800(&D_001D4A70);
}
