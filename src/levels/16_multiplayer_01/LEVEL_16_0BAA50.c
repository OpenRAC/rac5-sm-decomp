/* LEVEL_16:0x0BAA50 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_001AF4B4;
extern int D_001AF4B8;
extern int D_001AF4C4;
extern int D_001AF4C8[8];
extern int D_001AF548[3][6];
extern unsigned char D_001AF4F4;
extern int D_001AF590;
extern struct Obj D_001AF4F8;
extern struct Obj D_001AF520;

extern unsigned int func_0795B8(int value);
extern int func_0A50B0(int index);
extern void func_018B98(int a, int b);
extern int func_0ABF08(int a0);
extern int func_022890(int category, int selector);
extern int func_0228B8(int x, int y);
extern void func_0A1388(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0BAA50(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_0795B8(0x6B10);
    if (flags & 8) {
        func_0A50B0(7);
        func_018B98(4, 0);
    } else if (flags & 0x1000) {
        func_0A50B0(7);
        func_0A50B0(0);
        func_0ABF08(D_001AF590 != 0 ? D_001AF590 : 3);
    } else if (flags & 0x10) {
        func_0A50B0(8);
        D_001AF4B8--;
        if (D_001AF4B4 == 5) {
            if (D_001AF4B8 < 0) {
                D_001AF4B8 = 1;
            }
        } else {
            if (D_001AF4B8 < 0) {
                D_001AF4B8 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0A50B0(8);
        D_001AF4B8++;
        if (Past(D_001AF4B8, 2)) {
            D_001AF4B8 = 0;
        }
        if (D_001AF4B4 == 5) {
            if (Past(D_001AF4B8, 1)) {
                D_001AF4B8 = 0;
            }
        } else {
            if (Past(D_001AF4B8, 2)) {
                D_001AF4B8 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0A50B0(8);
        D_001AF4B4--;
        if (D_001AF4B8 == 2) {
            if (D_001AF4B4 < 0) {
                D_001AF4B4 = 4;
            }
        } else {
            if (D_001AF4B4 < 0) {
                D_001AF4B4 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0A50B0(8);
        D_001AF4B4++;
        if (D_001AF4B8 == 2) {
            if (Past(D_001AF4B4, 4)) {
                D_001AF4B4 = 0;
            }
        } else {
            if (Past(D_001AF4B4, 5)) {
                D_001AF4B4 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0A50B0(8);
        D_001AF4C4++;
        if (Past(D_001AF4C4, 7)) {
            D_001AF4C4 = 0;
        }
    } else if (flags & 0x200) {
        func_0A50B0(8);
        D_001AF4C4--;
        if (D_001AF4C4 < 0) {
            D_001AF4C4 = 7;
        }
    } else if (flags & 0x4000) {
        D_001AF4F4 = 1;
        sel = D_001AF548[D_001AF4B8][D_001AF4B4];
        if (func_022890(sel, -1) != 0 && func_0228B8(sel, -1) == 0) {
            D_001AF4C8[D_001AF4C4] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_001AF4C4 && D_001AF4C8[i] == sel) {
                    D_001AF4C8[i] = 0;
                }
            }
            D_001AF4C4--;
            if (D_001AF4C4 < 0) {
                D_001AF4C4 = 7;
            }
            func_0A50B0(1);
        }
    }
    func_0A1388(&D_001AF4F8);
    func_0A1388(&D_001AF520);
}
