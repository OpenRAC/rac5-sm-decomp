/* LEVEL_01:0x0CB350 -- reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_00201604;
extern int D_00201608;
extern int D_00201614;
extern int D_00201618[8];
extern int D_00201698[3][6];
extern unsigned char D_00201644;
extern int D_002016E0;
extern struct Obj D_00201648;
extern struct Obj D_00201670;

extern unsigned int func_088020(int value);
extern int func_0B6020(int index);
extern void func_01A828(int a, int b);
extern int func_0BCA80(int a0);
extern int func_024EC8(int category, int selector);
extern int func_024EF0(int x, int y);
extern void func_0B2A20(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0CB350(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_088020(0x6B10);
    if (flags & 8) {
        func_0B6020(7);
        func_01A828(4, 0);
    } else if (flags & 0x1000) {
        func_0B6020(7);
        func_0B6020(0);
        func_0BCA80(D_002016E0 != 0 ? D_002016E0 : 3);
    } else if (flags & 0x10) {
        func_0B6020(8);
        D_00201608--;
        if (D_00201604 == 5) {
            if (D_00201608 < 0) {
                D_00201608 = 1;
            }
        } else {
            if (D_00201608 < 0) {
                D_00201608 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0B6020(8);
        D_00201608++;
        if (Past(D_00201608, 2)) {
            D_00201608 = 0;
        }
        if (D_00201604 == 5) {
            if (Past(D_00201608, 1)) {
                D_00201608 = 0;
            }
        } else {
            if (Past(D_00201608, 2)) {
                D_00201608 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0B6020(8);
        D_00201604--;
        if (D_00201608 == 2) {
            if (D_00201604 < 0) {
                D_00201604 = 4;
            }
        } else {
            if (D_00201604 < 0) {
                D_00201604 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0B6020(8);
        D_00201604++;
        if (D_00201608 == 2) {
            if (Past(D_00201604, 4)) {
                D_00201604 = 0;
            }
        } else {
            if (Past(D_00201604, 5)) {
                D_00201604 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0B6020(8);
        D_00201614++;
        if (Past(D_00201614, 7)) {
            D_00201614 = 0;
        }
    } else if (flags & 0x200) {
        func_0B6020(8);
        D_00201614--;
        if (D_00201614 < 0) {
            D_00201614 = 7;
        }
    } else if (flags & 0x4000) {
        D_00201644 = 1;
        sel = D_00201698[D_00201608][D_00201604];
        if (func_024EC8(sel, -1) != 0 && func_024EF0(sel, -1) == 0) {
            D_00201618[D_00201614] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_00201614 && D_00201618[i] == sel) {
                    D_00201618[i] = 0;
                }
            }
            D_00201614--;
            if (D_00201614 < 0) {
                D_00201614 = 7;
            }
            func_0B6020(1);
        }
    }
    func_0B2A20(&D_00201648);
    func_0B2A20(&D_00201670);
}
