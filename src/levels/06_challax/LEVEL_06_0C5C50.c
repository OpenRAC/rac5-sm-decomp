/* LEVEL_06:0x0C5C50 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_001F0504;
extern int D_001F0508;
extern int D_001F0514;
extern int D_001F0518[8];
extern int D_001F0598[3][6];
extern unsigned char D_001F0544;
extern int D_001F05E0;
extern struct Obj D_001F0548;
extern struct Obj D_001F0570;

extern unsigned int func_080E98(int value);
extern int func_0B0848(int index);
extern void func_019028(int a, int b);
extern int func_0B7380(int a0);
extern int func_0235D0(int category, int selector);
extern int func_0235F8(int x, int y);
extern void func_0AD260(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0C5C50(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_080E98(0x6B10);
    if (flags & 8) {
        func_0B0848(7);
        func_019028(4, 0);
    } else if (flags & 0x1000) {
        func_0B0848(7);
        func_0B0848(0);
        func_0B7380(D_001F05E0 != 0 ? D_001F05E0 : 3);
    } else if (flags & 0x10) {
        func_0B0848(8);
        D_001F0508--;
        if (D_001F0504 == 5) {
            if (D_001F0508 < 0) {
                D_001F0508 = 1;
            }
        } else {
            if (D_001F0508 < 0) {
                D_001F0508 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0B0848(8);
        D_001F0508++;
        if (Past(D_001F0508, 2)) {
            D_001F0508 = 0;
        }
        if (D_001F0504 == 5) {
            if (Past(D_001F0508, 1)) {
                D_001F0508 = 0;
            }
        } else {
            if (Past(D_001F0508, 2)) {
                D_001F0508 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0B0848(8);
        D_001F0504--;
        if (D_001F0508 == 2) {
            if (D_001F0504 < 0) {
                D_001F0504 = 4;
            }
        } else {
            if (D_001F0504 < 0) {
                D_001F0504 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0B0848(8);
        D_001F0504++;
        if (D_001F0508 == 2) {
            if (Past(D_001F0504, 4)) {
                D_001F0504 = 0;
            }
        } else {
            if (Past(D_001F0504, 5)) {
                D_001F0504 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0B0848(8);
        D_001F0514++;
        if (Past(D_001F0514, 7)) {
            D_001F0514 = 0;
        }
    } else if (flags & 0x200) {
        func_0B0848(8);
        D_001F0514--;
        if (D_001F0514 < 0) {
            D_001F0514 = 7;
        }
    } else if (flags & 0x4000) {
        D_001F0544 = 1;
        sel = D_001F0598[D_001F0508][D_001F0504];
        if (func_0235D0(sel, -1) != 0 && func_0235F8(sel, -1) == 0) {
            D_001F0518[D_001F0514] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_001F0514 && D_001F0518[i] == sel) {
                    D_001F0518[i] = 0;
                }
            }
            D_001F0514--;
            if (D_001F0514 < 0) {
                D_001F0514 = 7;
            }
            func_0B0848(1);
        }
    }
    func_0AD260(&D_001F0548);
    func_0AD260(&D_001F0570);
}
