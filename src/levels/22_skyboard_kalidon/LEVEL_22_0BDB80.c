/* LEVEL_22:0x0BDB80 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_00282560[];
extern int *D_0015332C;
extern int D_00163928[1];
extern int D_00162810;
extern char D_00162819;
extern int D_00162814;
extern int D_0015BD88;

extern int *func_0C6938(int *a);
extern unsigned int *func_01F460(int id, int v);
extern unsigned int *func_01F4A8(int id, int v);
extern int func_0BDA20(int *obj);
extern int func_0BD9E0(int *obj);
extern int func_0BDA00(int *obj);
extern int func_0AA1D8(void);
extern void func_01F0E0(int a, int b);
extern void func_0BED78(void);
extern int func_0A2320(int v);
extern int func_020038(int a, int b, int c, int d);
extern int func_01F400(int a, int b);
extern void func_01FF00(int a, int b, int c, int d);
extern void func_1239F0(void);
extern int func_0C7338(int *a, int b);

void func_0BDB80(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0C6938(D_00282560);
    p2 = func_01F460(obj[5], -1);
    p3 = func_01F4A8(obj[5], -1);
    D_00163928[0] = 0;
    D_0015332C[0x71A] = D_0015332C[0x71A] - D_00162810;
    saved = D_00282560[3];
    D_00162819 = 1;
    if (func_0BDA20(obj) != 0) {
        func_01F0E0(0, func_0AA1D8() != 0x12);
        func_0BED78();
    } else if (func_0BD9E0(obj) != 0) {
        p2[16] = p2[16] + D_00162814;
        func_0A2320(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0BED78();
    } else if (func_0BDA00(obj) != 0) {
        func_020038(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_01F400(obj[5], -1) == 0) {
            D_0015BD88 = obj[5];
        }
        func_0BED78();
    } else {
        func_01FF00(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_1239F0();
        }
        if (func_01F400(obj[5], -1) == 0 && obj[5] != 7) {
            D_0015BD88 = obj[5];
        }
        func_0BED78();
    }
    func_0C7338(D_00282560, saved);
}
