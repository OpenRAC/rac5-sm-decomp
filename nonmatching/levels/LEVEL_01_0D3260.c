/* USA LEVEL_01.REL:0x0D3260, 888-byte candidate (22 November 2026).
 * Measured pinned: 29 differing words; first difference at 112.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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

extern char D_00204968[];
extern int D_002049A4;
extern int D_002049A8;
extern int D_002049AC;
extern int D_002049B0;
extern unsigned char D_002049B8;
extern int D_002049BC;
extern int D_002049C0;
extern struct Obj D_002049F0;
extern struct Obj D_002049C8;
extern int D_001FCA08;

extern unsigned int func_088020(int value);
extern int func_0B6020(int index);
extern void func_01A828(int a0, int a1);
extern int func_0BCA80(int a0);
extern void func_0CB340(unsigned int value);
extern int func_024EC8(int category, int selector);
extern int func_024EF0(int x, int y);
extern void func_0B2BE0(int *p);
extern void func_0D31A0(void);
extern void func_0B2A20(struct Obj *obj);
extern void func_0D41E8(void *s);

void func_0D3260(void)
{
    unsigned int in;
    int item;

    in = func_088020(0x6B10);
    item = *(int *)(D_00204968 + D_002049A4 * 4 + D_002049A8 * 0x14);
    if (in & 0x8) {
        func_0B6020(7);
        func_01A828(4, 0);
    } else if (in & 0x1000) {
        func_0B6020(0);
        func_0B6020(7);
        func_0BCA80(3);
    } else if (in & 0x2000) {
        func_0CB340(4);
        func_0BCA80(10);
    } else if (in & 0x8000) {
        if (item != 0 && func_024EC8(item, -1) != 0 && func_024EF0(item, -1) == 0) {
            D_002049B8 ^= 1;
            func_0B6020(1);
        }
    } else if (in & 0x4000) {
        if (item != 0 && func_024EC8(item, -1) != 0 && func_024EF0(item, -1) == 0) {
            D_002049AC = D_002049A4;
            D_001FCA08 = item;
            D_002049B0 = D_002049A8;
            func_0B6020(1);
            func_0B2BE0((int *)&D_002049F0);
        }
    } else if (D_002049B8 == 0) {
        if (in & 0x10) {
            func_0B6020(8);
            D_002049A8 = D_002049A8 - 1;
            if (D_002049A8 < 0)
                D_002049A8 = D_002049C0;
            func_0D31A0();
            func_0B2BE0((int *)&D_002049C8);
        } else if (in & 0x40) {
            func_0B6020(8);
            D_002049A8 = D_002049A8 + 1;
            if (3 <= D_002049A4) {
                if (1 < D_002049A8) {
                    D_002049A8 = 2;
                    D_002049A4 = 2;
                }
            } else {
                if (D_002049C0 < D_002049A8)
                    D_002049A8 = 0;
            }
            func_0D31A0();
            func_0B2BE0((int *)&D_002049C8);
        } else if (in & 0x80) {
            func_0B6020(8);
            D_002049A4 = D_002049A4 - 1;
            if (D_002049A4 < 0)
                D_002049A4 = D_002049BC;
            func_0D31A0();
            func_0B2BE0((int *)&D_002049C8);
        } else if (in & 0x20) {
            int limit;
            int n;

            func_0B6020(8);
            n = D_002049A4 + 1;
            D_002049A4 = n;
            if (D_002049A8 == D_002049C0)
                limit = 2;
            else
                limit = D_002049BC;
            if (limit < n)
                D_002049A4 = 0;
            func_0D31A0();
            func_0B2BE0((int *)&D_002049C8);
        }
    }
    if (1 < D_002049A8) {
        int d = 2;

        if (D_002049A4 < 0)
            D_002049A4 = d + D_002049A4;
        else if (d < D_002049A4)
            D_002049A4 = D_002049A4 - d;
    }
    func_0B2A20(&D_002049C8);
    func_0B2A20(&D_002049F0);
    func_0D41E8(0);
}
