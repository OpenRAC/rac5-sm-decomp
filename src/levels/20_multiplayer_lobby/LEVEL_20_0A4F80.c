/* LEVEL_20:0x0A4F80 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_00111B94;
extern int D_00111B98;
extern int D_00111BA4;
extern int D_00111BA8[8];
extern int D_00111C28[3][6];
extern unsigned char D_00111BD4;
extern int D_00111C70;
extern struct Obj D_00111BD8;
extern struct Obj D_00111C00;

extern unsigned int func_067228(int value);
extern int func_08F6B0(int index);
extern void func_016950(int a, int b);
extern int func_096438(int a0);
extern int func_01F590(int category, int selector);
extern int func_01F5B8(int x, int y);
extern void func_08BA80(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0A4F80(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_067228(0x6B10);
    if (flags & 8) {
        func_08F6B0(7);
        func_016950(4, 0);
    } else if (flags & 0x1000) {
        func_08F6B0(7);
        func_08F6B0(0);
        func_096438(D_00111C70 != 0 ? D_00111C70 : 3);
    } else if (flags & 0x10) {
        func_08F6B0(8);
        D_00111B98--;
        if (D_00111B94 == 5) {
            if (D_00111B98 < 0) {
                D_00111B98 = 1;
            }
        } else {
            if (D_00111B98 < 0) {
                D_00111B98 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_08F6B0(8);
        D_00111B98++;
        if (Past(D_00111B98, 2)) {
            D_00111B98 = 0;
        }
        if (D_00111B94 == 5) {
            if (Past(D_00111B98, 1)) {
                D_00111B98 = 0;
            }
        } else {
            if (Past(D_00111B98, 2)) {
                D_00111B98 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_08F6B0(8);
        D_00111B94--;
        if (D_00111B98 == 2) {
            if (D_00111B94 < 0) {
                D_00111B94 = 4;
            }
        } else {
            if (D_00111B94 < 0) {
                D_00111B94 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_08F6B0(8);
        D_00111B94++;
        if (D_00111B98 == 2) {
            if (Past(D_00111B94, 4)) {
                D_00111B94 = 0;
            }
        } else {
            if (Past(D_00111B94, 5)) {
                D_00111B94 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_08F6B0(8);
        D_00111BA4++;
        if (Past(D_00111BA4, 7)) {
            D_00111BA4 = 0;
        }
    } else if (flags & 0x200) {
        func_08F6B0(8);
        D_00111BA4--;
        if (D_00111BA4 < 0) {
            D_00111BA4 = 7;
        }
    } else if (flags & 0x4000) {
        D_00111BD4 = 1;
        sel = D_00111C28[D_00111B98][D_00111B94];
        if (func_01F590(sel, -1) != 0 && func_01F5B8(sel, -1) == 0) {
            D_00111BA8[D_00111BA4] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_00111BA4 && D_00111BA8[i] == sel) {
                    D_00111BA8[i] = 0;
                }
            }
            D_00111BA4--;
            if (D_00111BA4 < 0) {
                D_00111BA4 = 7;
            }
            func_08F6B0(1);
        }
    }
    func_08BA80(&D_00111BD8);
    func_08BA80(&D_00111C00);
}
