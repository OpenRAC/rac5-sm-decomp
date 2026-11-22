/* LEVEL_18:0x0B9A28 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_001B0934;
extern int D_001B0938;
extern int D_001B0944;
extern int D_001B0948[8];
extern int D_001B09C8[3][6];
extern unsigned char D_001B0974;
extern int D_001B0A10;
extern struct Obj D_001B0978;
extern struct Obj D_001B09A0;

extern unsigned int func_078F38(int value);
extern int func_0A40A8(int index);
extern void func_0181E0(int a, int b);
extern int func_0AAEE0(int a0);
extern int func_021ED8(int category, int selector);
extern int func_021F00(int x, int y);
extern void func_0A0398(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0B9A28(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_078F38(0x6B10);
    if (flags & 8) {
        func_0A40A8(7);
        func_0181E0(4, 0);
    } else if (flags & 0x1000) {
        func_0A40A8(7);
        func_0A40A8(0);
        func_0AAEE0(D_001B0A10 != 0 ? D_001B0A10 : 3);
    } else if (flags & 0x10) {
        func_0A40A8(8);
        D_001B0938--;
        if (D_001B0934 == 5) {
            if (D_001B0938 < 0) {
                D_001B0938 = 1;
            }
        } else {
            if (D_001B0938 < 0) {
                D_001B0938 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0A40A8(8);
        D_001B0938++;
        if (Past(D_001B0938, 2)) {
            D_001B0938 = 0;
        }
        if (D_001B0934 == 5) {
            if (Past(D_001B0938, 1)) {
                D_001B0938 = 0;
            }
        } else {
            if (Past(D_001B0938, 2)) {
                D_001B0938 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0A40A8(8);
        D_001B0934--;
        if (D_001B0938 == 2) {
            if (D_001B0934 < 0) {
                D_001B0934 = 4;
            }
        } else {
            if (D_001B0934 < 0) {
                D_001B0934 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0A40A8(8);
        D_001B0934++;
        if (D_001B0938 == 2) {
            if (Past(D_001B0934, 4)) {
                D_001B0934 = 0;
            }
        } else {
            if (Past(D_001B0934, 5)) {
                D_001B0934 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0A40A8(8);
        D_001B0944++;
        if (Past(D_001B0944, 7)) {
            D_001B0944 = 0;
        }
    } else if (flags & 0x200) {
        func_0A40A8(8);
        D_001B0944--;
        if (D_001B0944 < 0) {
            D_001B0944 = 7;
        }
    } else if (flags & 0x4000) {
        D_001B0974 = 1;
        sel = D_001B09C8[D_001B0938][D_001B0934];
        if (func_021ED8(sel, -1) != 0 && func_021F00(sel, -1) == 0) {
            D_001B0948[D_001B0944] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_001B0944 && D_001B0948[i] == sel) {
                    D_001B0948[i] = 0;
                }
            }
            D_001B0944--;
            if (D_001B0944 < 0) {
                D_001B0944 = 7;
            }
            func_0A40A8(1);
        }
    }
    func_0A0398(&D_001B0978);
    func_0A0398(&D_001B09A0);
}
