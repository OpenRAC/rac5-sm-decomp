/* LEVEL_19:0x0BA328 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_001B0634;
extern int D_001B0638;
extern int D_001B0644;
extern int D_001B0648[8];
extern int D_001B06C8[3][6];
extern unsigned char D_001B0674;
extern int D_001B0710;
extern struct Obj D_001B0678;
extern struct Obj D_001B06A0;

extern unsigned int func_079AA0(int value);
extern int func_0A4928(int index);
extern void func_018898(int a, int b);
extern int func_0AB7E0(int a0);
extern int func_0224D0(int category, int selector);
extern int func_0224F8(int x, int y);
extern void func_0A0C18(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0BA328(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_079AA0(0x6B10);
    if (flags & 8) {
        func_0A4928(7);
        func_018898(4, 0);
    } else if (flags & 0x1000) {
        func_0A4928(7);
        func_0A4928(0);
        func_0AB7E0(D_001B0710 != 0 ? D_001B0710 : 3);
    } else if (flags & 0x10) {
        func_0A4928(8);
        D_001B0638--;
        if (D_001B0634 == 5) {
            if (D_001B0638 < 0) {
                D_001B0638 = 1;
            }
        } else {
            if (D_001B0638 < 0) {
                D_001B0638 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0A4928(8);
        D_001B0638++;
        if (Past(D_001B0638, 2)) {
            D_001B0638 = 0;
        }
        if (D_001B0634 == 5) {
            if (Past(D_001B0638, 1)) {
                D_001B0638 = 0;
            }
        } else {
            if (Past(D_001B0638, 2)) {
                D_001B0638 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0A4928(8);
        D_001B0634--;
        if (D_001B0638 == 2) {
            if (D_001B0634 < 0) {
                D_001B0634 = 4;
            }
        } else {
            if (D_001B0634 < 0) {
                D_001B0634 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0A4928(8);
        D_001B0634++;
        if (D_001B0638 == 2) {
            if (Past(D_001B0634, 4)) {
                D_001B0634 = 0;
            }
        } else {
            if (Past(D_001B0634, 5)) {
                D_001B0634 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0A4928(8);
        D_001B0644++;
        if (Past(D_001B0644, 7)) {
            D_001B0644 = 0;
        }
    } else if (flags & 0x200) {
        func_0A4928(8);
        D_001B0644--;
        if (D_001B0644 < 0) {
            D_001B0644 = 7;
        }
    } else if (flags & 0x4000) {
        D_001B0674 = 1;
        sel = D_001B06C8[D_001B0638][D_001B0634];
        if (func_0224D0(sel, -1) != 0 && func_0224F8(sel, -1) == 0) {
            D_001B0648[D_001B0644] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_001B0644 && D_001B0648[i] == sel) {
                    D_001B0648[i] = 0;
                }
            }
            D_001B0644--;
            if (D_001B0644 < 0) {
                D_001B0644 = 7;
            }
            func_0A4928(1);
        }
    }
    func_0A0C18(&D_001B0678);
    func_0A0C18(&D_001B06A0);
}
