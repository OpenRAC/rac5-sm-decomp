/* LEVEL_17:0x0B9F90 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_001A2AB4;
extern int D_001A2AB8;
extern int D_001A2AC4;
extern int D_001A2AC8[8];
extern int D_001A2B48[3][6];
extern unsigned char D_001A2AF4;
extern int D_001A2B90;
extern struct Obj D_001A2AF8;
extern struct Obj D_001A2B20;

extern unsigned int func_07A030(int value);
extern int func_0A4590(int index);
extern void func_018518(int a, int b);
extern int func_0AB448(int a0);
extern int func_022210(int category, int selector);
extern int func_022238(int x, int y);
extern void func_0A0880(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0B9F90(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_07A030(0x6B10);
    if (flags & 8) {
        func_0A4590(7);
        func_018518(4, 0);
    } else if (flags & 0x1000) {
        func_0A4590(7);
        func_0A4590(0);
        func_0AB448(D_001A2B90 != 0 ? D_001A2B90 : 3);
    } else if (flags & 0x10) {
        func_0A4590(8);
        D_001A2AB8--;
        if (D_001A2AB4 == 5) {
            if (D_001A2AB8 < 0) {
                D_001A2AB8 = 1;
            }
        } else {
            if (D_001A2AB8 < 0) {
                D_001A2AB8 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0A4590(8);
        D_001A2AB8++;
        if (Past(D_001A2AB8, 2)) {
            D_001A2AB8 = 0;
        }
        if (D_001A2AB4 == 5) {
            if (Past(D_001A2AB8, 1)) {
                D_001A2AB8 = 0;
            }
        } else {
            if (Past(D_001A2AB8, 2)) {
                D_001A2AB8 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0A4590(8);
        D_001A2AB4--;
        if (D_001A2AB8 == 2) {
            if (D_001A2AB4 < 0) {
                D_001A2AB4 = 4;
            }
        } else {
            if (D_001A2AB4 < 0) {
                D_001A2AB4 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0A4590(8);
        D_001A2AB4++;
        if (D_001A2AB8 == 2) {
            if (Past(D_001A2AB4, 4)) {
                D_001A2AB4 = 0;
            }
        } else {
            if (Past(D_001A2AB4, 5)) {
                D_001A2AB4 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0A4590(8);
        D_001A2AC4++;
        if (Past(D_001A2AC4, 7)) {
            D_001A2AC4 = 0;
        }
    } else if (flags & 0x200) {
        func_0A4590(8);
        D_001A2AC4--;
        if (D_001A2AC4 < 0) {
            D_001A2AC4 = 7;
        }
    } else if (flags & 0x4000) {
        D_001A2AF4 = 1;
        sel = D_001A2B48[D_001A2AB8][D_001A2AB4];
        if (func_022210(sel, -1) != 0 && func_022238(sel, -1) == 0) {
            D_001A2AC8[D_001A2AC4] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_001A2AC4 && D_001A2AC8[i] == sel) {
                    D_001A2AC8[i] = 0;
                }
            }
            D_001A2AC4--;
            if (D_001A2AC4 < 0) {
                D_001A2AC4 = 7;
            }
            func_0A4590(1);
        }
    }
    func_0A0880(&D_001A2AF8);
    func_0A0880(&D_001A2B20);
}
