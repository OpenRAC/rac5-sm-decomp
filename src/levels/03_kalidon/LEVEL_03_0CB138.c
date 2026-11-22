/* LEVEL_03:0x0CB138 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_00219C84;
extern int D_00219C88;
extern int D_00219C94;
extern int D_00219C98[8];
extern int D_00219D18[3][6];
extern unsigned char D_00219CC4;
extern int D_00219D60;
extern struct Obj D_00219CC8;
extern struct Obj D_00219CF0;

extern unsigned int func_087E78(int value);
extern int func_0B5E08(int index);
extern void func_01A590(int a, int b);
extern int func_0BC868(int a0);
extern int func_024D98(int category, int selector);
extern int func_024DC0(int x, int y);
extern void func_0B2808(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0CB138(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_087E78(0x6B10);
    if (flags & 8) {
        func_0B5E08(7);
        func_01A590(4, 0);
    } else if (flags & 0x1000) {
        func_0B5E08(7);
        func_0B5E08(0);
        func_0BC868(D_00219D60 != 0 ? D_00219D60 : 3);
    } else if (flags & 0x10) {
        func_0B5E08(8);
        D_00219C88--;
        if (D_00219C84 == 5) {
            if (D_00219C88 < 0) {
                D_00219C88 = 1;
            }
        } else {
            if (D_00219C88 < 0) {
                D_00219C88 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0B5E08(8);
        D_00219C88++;
        if (Past(D_00219C88, 2)) {
            D_00219C88 = 0;
        }
        if (D_00219C84 == 5) {
            if (Past(D_00219C88, 1)) {
                D_00219C88 = 0;
            }
        } else {
            if (Past(D_00219C88, 2)) {
                D_00219C88 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0B5E08(8);
        D_00219C84--;
        if (D_00219C88 == 2) {
            if (D_00219C84 < 0) {
                D_00219C84 = 4;
            }
        } else {
            if (D_00219C84 < 0) {
                D_00219C84 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0B5E08(8);
        D_00219C84++;
        if (D_00219C88 == 2) {
            if (Past(D_00219C84, 4)) {
                D_00219C84 = 0;
            }
        } else {
            if (Past(D_00219C84, 5)) {
                D_00219C84 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0B5E08(8);
        D_00219C94++;
        if (Past(D_00219C94, 7)) {
            D_00219C94 = 0;
        }
    } else if (flags & 0x200) {
        func_0B5E08(8);
        D_00219C94--;
        if (D_00219C94 < 0) {
            D_00219C94 = 7;
        }
    } else if (flags & 0x4000) {
        D_00219CC4 = 1;
        sel = D_00219D18[D_00219C88][D_00219C84];
        if (func_024D98(sel, -1) != 0 && func_024DC0(sel, -1) == 0) {
            D_00219C98[D_00219C94] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_00219C94 && D_00219C98[i] == sel) {
                    D_00219C98[i] = 0;
                }
            }
            D_00219C94--;
            if (D_00219C94 < 0) {
                D_00219C94 = 7;
            }
            func_0B5E08(1);
        }
    }
    func_0B2808(&D_00219CC8);
    func_0B2808(&D_00219CF0);
}
