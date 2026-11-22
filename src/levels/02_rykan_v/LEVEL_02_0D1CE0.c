/* LEVEL_02:0x0D1CE0 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_002165C4;
extern int D_002165C8;
extern int D_002165D4;
extern int D_002165D8[8];
extern int D_00216658[3][6];
extern unsigned char D_00216604;
extern int D_002166A0;
extern struct Obj D_00216608;
extern struct Obj D_00216630;

extern unsigned int func_08E950(int value);
extern int func_0BC930(int index);
extern void func_01B188(int a, int b);
extern int func_0C3390(int a0);
extern int func_025828(int category, int selector);
extern int func_025850(int x, int y);
extern void func_0B9330(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0D1CE0(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_08E950(0x6B10);
    if (flags & 8) {
        func_0BC930(7);
        func_01B188(4, 0);
    } else if (flags & 0x1000) {
        func_0BC930(7);
        func_0BC930(0);
        func_0C3390(D_002166A0 != 0 ? D_002166A0 : 3);
    } else if (flags & 0x10) {
        func_0BC930(8);
        D_002165C8--;
        if (D_002165C4 == 5) {
            if (D_002165C8 < 0) {
                D_002165C8 = 1;
            }
        } else {
            if (D_002165C8 < 0) {
                D_002165C8 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0BC930(8);
        D_002165C8++;
        if (Past(D_002165C8, 2)) {
            D_002165C8 = 0;
        }
        if (D_002165C4 == 5) {
            if (Past(D_002165C8, 1)) {
                D_002165C8 = 0;
            }
        } else {
            if (Past(D_002165C8, 2)) {
                D_002165C8 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0BC930(8);
        D_002165C4--;
        if (D_002165C8 == 2) {
            if (D_002165C4 < 0) {
                D_002165C4 = 4;
            }
        } else {
            if (D_002165C4 < 0) {
                D_002165C4 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0BC930(8);
        D_002165C4++;
        if (D_002165C8 == 2) {
            if (Past(D_002165C4, 4)) {
                D_002165C4 = 0;
            }
        } else {
            if (Past(D_002165C4, 5)) {
                D_002165C4 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0BC930(8);
        D_002165D4++;
        if (Past(D_002165D4, 7)) {
            D_002165D4 = 0;
        }
    } else if (flags & 0x200) {
        func_0BC930(8);
        D_002165D4--;
        if (D_002165D4 < 0) {
            D_002165D4 = 7;
        }
    } else if (flags & 0x4000) {
        D_00216604 = 1;
        sel = D_00216658[D_002165C8][D_002165C4];
        if (func_025828(sel, -1) != 0 && func_025850(sel, -1) == 0) {
            D_002165D8[D_002165D4] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_002165D4 && D_002165D8[i] == sel) {
                    D_002165D8[i] = 0;
                }
            }
            D_002165D4--;
            if (D_002165D4 < 0) {
                D_002165D4 = 7;
            }
            func_0BC930(1);
        }
    }
    func_0B9330(&D_00216608);
    func_0B9330(&D_00216630);
}
