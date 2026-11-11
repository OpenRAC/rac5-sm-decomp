/* LEVEL_05:0x0CDBE8 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_00318860[];
extern int *D_001E332C;
extern int D_001F3928[1];
extern int D_001F2810;
extern char D_001F2819;
extern int D_001F2814;
extern int D_001EBD88;

extern int *func_0D69A0(int *a);
extern unsigned int *func_0235C0(int id, int v);
extern unsigned int *func_023608(int id, int v);
extern int func_0CDA88(int *obj);
extern int func_0CDA48(int *obj);
extern int func_0CDA68(int *obj);
extern int func_0BA2D8(void);
extern void func_023240(int a, int b);
extern void func_0CEDE0(void);
extern int func_0B2260(int v);
extern int func_0241F0(int a, int b, int c, int d);
extern int func_023560(int a, int b);
extern void func_0240B8(int a, int b, int c, int d);
extern void func_151DA8(void);
extern int func_0D73A0(int *a, int b);

void func_0CDBE8(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0D69A0(D_00318860);
    p2 = func_0235C0(obj[5], -1);
    p3 = func_023608(obj[5], -1);
    D_001F3928[0] = 0;
    D_001E332C[0x71A] = D_001E332C[0x71A] - D_001F2810;
    saved = D_00318860[3];
    D_001F2819 = 1;
    if (func_0CDA88(obj) != 0) {
        func_023240(0, func_0BA2D8() != 0x12);
        func_0CEDE0();
    } else if (func_0CDA48(obj) != 0) {
        p2[16] = p2[16] + D_001F2814;
        func_0B2260(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0CEDE0();
    } else if (func_0CDA68(obj) != 0) {
        func_0241F0(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_023560(obj[5], -1) == 0) {
            D_001EBD88 = obj[5];
        }
        func_0CEDE0();
    } else {
        func_0240B8(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_151DA8();
        }
        if (func_023560(obj[5], -1) == 0 && obj[5] != 7) {
            D_001EBD88 = obj[5];
        }
        func_0CEDE0();
    }
    func_0D73A0(D_00318860, saved);
}
