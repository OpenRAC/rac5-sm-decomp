/* LEVEL_07:0x0CD3B0 -- placement copy of LEVEL_01_0CB350.c: reads the pressed buttons and moves the cursor of a two-axis selection grid (row and column with a shorter last row), a second 8-slot cursor, or confirms the highlighted entry into the slot list, then updates the two cursor objects. */
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

extern int D_00215904;
extern int D_00215908;
extern int D_00215914;
extern int D_00215918[8];
extern int D_00215998[3][6];
extern unsigned char D_00215944;
extern int D_002159E0;
extern struct Obj D_00215948;
extern struct Obj D_00215970;

extern unsigned int func_08A0F0(int value);
extern int func_0B8080(int index);
extern void func_01AEE8(int a, int b);
extern int func_0BEAE0(int a0);
extern int func_025490(int category, int selector);
extern int func_0254B8(int x, int y);
extern void func_0B4A80(struct Obj *obj);

static __inline__ int Past(int v, int max)
{
    return v > max;
}

void func_0CD3B0(void)
{
    unsigned int flags;
    int sel;
    unsigned int i;

    flags = func_08A0F0(0x6B10);
    if (flags & 8) {
        func_0B8080(7);
        func_01AEE8(4, 0);
    } else if (flags & 0x1000) {
        func_0B8080(7);
        func_0B8080(0);
        func_0BEAE0(D_002159E0 != 0 ? D_002159E0 : 3);
    } else if (flags & 0x10) {
        func_0B8080(8);
        D_00215908--;
        if (D_00215904 == 5) {
            if (D_00215908 < 0) {
                D_00215908 = 1;
            }
        } else {
            if (D_00215908 < 0) {
                D_00215908 = 2;
            }
        }
    } else if (flags & 0x40) {
        func_0B8080(8);
        D_00215908++;
        if (Past(D_00215908, 2)) {
            D_00215908 = 0;
        }
        if (D_00215904 == 5) {
            if (Past(D_00215908, 1)) {
                D_00215908 = 0;
            }
        } else {
            if (Past(D_00215908, 2)) {
                D_00215908 = 0;
            }
        }
    } else if (flags & 0x80) {
        func_0B8080(8);
        D_00215904--;
        if (D_00215908 == 2) {
            if (D_00215904 < 0) {
                D_00215904 = 4;
            }
        } else {
            if (D_00215904 < 0) {
                D_00215904 = 5;
            }
        }
    } else if (flags & 0x20) {
        func_0B8080(8);
        D_00215904++;
        if (D_00215908 == 2) {
            if (Past(D_00215904, 4)) {
                D_00215904 = 0;
            }
        } else {
            if (Past(D_00215904, 5)) {
                D_00215904 = 0;
            }
        }
    } else if (flags & 0x100) {
        func_0B8080(8);
        D_00215914++;
        if (Past(D_00215914, 7)) {
            D_00215914 = 0;
        }
    } else if (flags & 0x200) {
        func_0B8080(8);
        D_00215914--;
        if (D_00215914 < 0) {
            D_00215914 = 7;
        }
    } else if (flags & 0x4000) {
        D_00215944 = 1;
        sel = D_00215998[D_00215908][D_00215904];
        if (func_025490(sel, -1) != 0 && func_0254B8(sel, -1) == 0) {
            D_00215918[D_00215914] = sel;
            for (i = 0; i < 8; i++) {
                if (i != D_00215914 && D_00215918[i] == sel) {
                    D_00215918[i] = 0;
                }
            }
            D_00215914--;
            if (D_00215914 < 0) {
                D_00215914 = 7;
            }
            func_0B8080(1);
        }
    }
    func_0B4A80(&D_00215948);
    func_0B4A80(&D_00215970);
}
