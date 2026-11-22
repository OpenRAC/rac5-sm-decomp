/* LEVEL_08:0x0D62F8 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_0024A4C4;
extern int D_0024A4C8;
extern int D_0024A4D4;
extern int D_0024A4D8[8];
extern int D_0024A558[3][6];
extern unsigned char D_0024A504;
extern int D_0024A5A0;
extern struct Obj D_0024A508;
extern struct Obj D_0024A530;

extern unsigned int func_090070(int value);
extern int func_0C0F10(int index);
extern void func_01B1A0(int a, int b);
extern int func_0C79A8(int a0);
extern int func_025748(int category, int selector);
extern int func_025770(int x, int y);
extern void func_0BD6B8(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0D62F8(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_090070(0x6B10);
    if (flags & 8) {
        func_0C0F10(7);
        func_01B1A0(4, 0);
    } else if (flags & 0x1000) {
        func_0C0F10(7);
        func_0C0F10(0);
        func_0C79A8(D_0024A5A0 != 0 ? D_0024A5A0 : 3);
    } else if (flags & 0x10) {
        func_0C0F10(8);
        D_0024A4C8--;
        if (D_0024A4C4 == 5) {
            if (D_0024A4C8 < 0) {
                D_0024A4C8 = 1;
            }
        } else {
            if (D_0024A4C8 < 0) {
                D_0024A4C8 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0C0F10(8);
        D_0024A4C8++;
        if (Past(D_0024A4C8, 2)) {
            D_0024A4C8 = 0;
        }
        if (D_0024A4C4 == 5) {
            if (Past(D_0024A4C8, 1)) {
                D_0024A4C8 = 0;
            }
        } else {
            if (Past(D_0024A4C8, 2)) {
                D_0024A4C8 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0C0F10(8);
        D_0024A4C4--;
        if (D_0024A4C8 == 2) {
            if (D_0024A4C4 < 0) {
                D_0024A4C4 = 4;
            }
        } else {
            if (D_0024A4C4 < 0) {
                D_0024A4C4 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0C0F10(8);
        D_0024A4C4++;
        if (D_0024A4C8 == 2) {
            if (Past(D_0024A4C4, 4)) {
                D_0024A4C4 = 0;
            }
        } else {
            if (Past(D_0024A4C4, 5)) {
                D_0024A4C4 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0C0F10(8);
        D_0024A4D4++;
        if (Past(D_0024A4D4, 7)) {
            D_0024A4D4 = 0;
        }
    } else if (flags & 0x200) {
        func_0C0F10(8);
        D_0024A4D4--;
        if (D_0024A4D4 < 0) {
            D_0024A4D4 = 7;
        }
    } else if (flags & 0x4000) {
        D_0024A504 = 1;
        sel = D_0024A558[D_0024A4C8][D_0024A4C4];
        if (func_025748(sel, -1) != 0 && func_025770(sel, -1) == 0) {
            D_0024A4D8[D_0024A4D4] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_0024A4D4 && D_0024A4D8[i] == sel) {
                    D_0024A4D8[i] = 0;
                }
            }
            D_0024A4D4--;
            if (D_0024A4D4 < 0) {
                D_0024A4D4 = 7;
            }
            func_0C0F10(1);
        }
    }
    func_0BD6B8(&D_0024A508);
    func_0BD6B8(&D_0024A530);
}
