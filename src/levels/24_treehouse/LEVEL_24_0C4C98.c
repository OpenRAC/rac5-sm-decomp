/* LEVEL_24:0x0C4C98 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_001D2284;
extern int D_001D2288;
extern int D_001D2294;
extern int D_001D2298[8];
extern int D_001D2318[3][6];
extern unsigned char D_001D22C4;
extern int D_001D2360;
extern struct Obj D_001D22C8;
extern struct Obj D_001D22F0;

extern unsigned int func_0812C0(int value);
extern int func_0AF8B0(int index);
extern void func_018E18(int a, int b);
extern int func_0B6348(int a0);
extern int func_022CA0(int category, int selector);
extern int func_022CC8(int x, int y);
extern void func_0AC298(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0C4C98(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_0812C0(0x6B10);
    if (flags & 8) {
        func_0AF8B0(7);
        func_018E18(4, 0);
    } else if (flags & 0x1000) {
        func_0AF8B0(7);
        func_0AF8B0(0);
        func_0B6348(D_001D2360 != 0 ? D_001D2360 : 3);
    } else if (flags & 0x10) {
        func_0AF8B0(8);
        D_001D2288--;
        if (D_001D2284 == 5) {
            if (D_001D2288 < 0) {
                D_001D2288 = 1;
            }
        } else {
            if (D_001D2288 < 0) {
                D_001D2288 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0AF8B0(8);
        D_001D2288++;
        if (Past(D_001D2288, 2)) {
            D_001D2288 = 0;
        }
        if (D_001D2284 == 5) {
            if (Past(D_001D2288, 1)) {
                D_001D2288 = 0;
            }
        } else {
            if (Past(D_001D2288, 2)) {
                D_001D2288 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0AF8B0(8);
        D_001D2284--;
        if (D_001D2288 == 2) {
            if (D_001D2284 < 0) {
                D_001D2284 = 4;
            }
        } else {
            if (D_001D2284 < 0) {
                D_001D2284 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0AF8B0(8);
        D_001D2284++;
        if (D_001D2288 == 2) {
            if (Past(D_001D2284, 4)) {
                D_001D2284 = 0;
            }
        } else {
            if (Past(D_001D2284, 5)) {
                D_001D2284 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0AF8B0(8);
        D_001D2294++;
        if (Past(D_001D2294, 7)) {
            D_001D2294 = 0;
        }
    } else if (flags & 0x200) {
        func_0AF8B0(8);
        D_001D2294--;
        if (D_001D2294 < 0) {
            D_001D2294 = 7;
        }
    } else if (flags & 0x4000) {
        D_001D22C4 = 1;
        sel = D_001D2318[D_001D2288][D_001D2284];
        if (func_022CA0(sel, -1) != 0 && func_022CC8(sel, -1) == 0) {
            D_001D2298[D_001D2294] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_001D2294 && D_001D2298[i] == sel) {
                    D_001D2298[i] = 0;
                }
            }
            D_001D2294--;
            if (D_001D2294 < 0) {
                D_001D2294 = 7;
            }
            func_0AF8B0(1);
        }
    }
    func_0AC298(&D_001D22C8);
    func_0AC298(&D_001D22F0);
}
