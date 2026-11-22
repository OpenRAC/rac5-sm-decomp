/* LEVEL_04:0x0D0BE8 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_0021AAC4;
extern int D_0021AAC8;
extern int D_0021AAD4;
extern int D_0021AAD8[8];
extern int D_0021AB58[3][6];
extern unsigned char D_0021AB04;
extern int D_0021ABA0;
extern struct Obj D_0021AB08;
extern struct Obj D_0021AB30;

extern unsigned int func_08B2B8(int value);
extern int func_0BB828(int index);
extern void func_01A4A8(int a, int b);
extern int func_0C2298(int a0);
extern int func_024B48(int category, int selector);
extern int func_024B70(int x, int y);
extern void func_0B7FD0(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0D0BE8(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_08B2B8(0x6B10);
    if (flags & 8) {
        func_0BB828(7);
        func_01A4A8(4, 0);
    } else if (flags & 0x1000) {
        func_0BB828(7);
        func_0BB828(0);
        func_0C2298(D_0021ABA0 != 0 ? D_0021ABA0 : 3);
    } else if (flags & 0x10) {
        func_0BB828(8);
        D_0021AAC8--;
        if (D_0021AAC4 == 5) {
            if (D_0021AAC8 < 0) {
                D_0021AAC8 = 1;
            }
        } else {
            if (D_0021AAC8 < 0) {
                D_0021AAC8 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0BB828(8);
        D_0021AAC8++;
        if (Past(D_0021AAC8, 2)) {
            D_0021AAC8 = 0;
        }
        if (D_0021AAC4 == 5) {
            if (Past(D_0021AAC8, 1)) {
                D_0021AAC8 = 0;
            }
        } else {
            if (Past(D_0021AAC8, 2)) {
                D_0021AAC8 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0BB828(8);
        D_0021AAC4--;
        if (D_0021AAC8 == 2) {
            if (D_0021AAC4 < 0) {
                D_0021AAC4 = 4;
            }
        } else {
            if (D_0021AAC4 < 0) {
                D_0021AAC4 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0BB828(8);
        D_0021AAC4++;
        if (D_0021AAC8 == 2) {
            if (Past(D_0021AAC4, 4)) {
                D_0021AAC4 = 0;
            }
        } else {
            if (Past(D_0021AAC4, 5)) {
                D_0021AAC4 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0BB828(8);
        D_0021AAD4++;
        if (Past(D_0021AAD4, 7)) {
            D_0021AAD4 = 0;
        }
    } else if (flags & 0x200) {
        func_0BB828(8);
        D_0021AAD4--;
        if (D_0021AAD4 < 0) {
            D_0021AAD4 = 7;
        }
    } else if (flags & 0x4000) {
        D_0021AB04 = 1;
        sel = D_0021AB58[D_0021AAC8][D_0021AAC4];
        if (func_024B48(sel, -1) != 0 && func_024B70(sel, -1) == 0) {
            D_0021AAD8[D_0021AAD4] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_0021AAD4 && D_0021AAD8[i] == sel) {
                    D_0021AAD8[i] = 0;
                }
            }
            D_0021AAD4--;
            if (D_0021AAD4 < 0) {
                D_0021AAD4 = 7;
            }
            func_0BB828(1);
        }
    }
    func_0B7FD0(&D_0021AB08);
    func_0B7FD0(&D_0021AB30);
}
