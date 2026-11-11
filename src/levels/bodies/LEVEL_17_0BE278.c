/* LEVEL_17:0x0BE278 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_0026BD20[];
extern int *D_001950B4;
extern int D_001A5A58[1];
extern int D_001A4940;
extern char D_001A4949;
extern int D_001A4944;
extern int D_0019E088;

extern int *func_0C7030(int *a);
extern unsigned int *func_021A48(int id, int v);
extern unsigned int *func_021A90(int id, int v);
extern int func_0BE118(int *obj);
extern int func_0BE0D8(int *obj);
extern int func_0BE0F8(int *obj);
extern int func_0AA360(void);
extern void func_021580(int a, int b);
extern void func_0BF470(void);
extern int func_0A1900(int v);
extern int func_022528(int a, int b, int c, int d);
extern int func_0219F0(int a, int b);
extern void func_022448(int a, int b, int c, int d);
extern void func_1252C8(void);
extern int func_0C7A30(int *a, int b);

void func_0BE278(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0C7030(D_0026BD20);
    p2 = func_021A48(obj[5], -1);
    p3 = func_021A90(obj[5], -1);
    D_001A5A58[0] = 0;
    D_001950B4[0x71A] = D_001950B4[0x71A] - D_001A4940;
    saved = D_0026BD20[3];
    D_001A4949 = 1;
    if (func_0BE118(obj) != 0) {
        func_021580(0, func_0AA360() != 0x12);
        func_0BF470();
    } else if (func_0BE0D8(obj) != 0) {
        p2[16] = p2[16] + D_001A4944;
        func_0A1900(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0BF470();
    } else if (func_0BE0F8(obj) != 0) {
        func_022528(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_0219F0(obj[5], -1) == 0) {
            D_0019E088 = obj[5];
        }
        func_0BF470();
    } else {
        func_022448(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_1252C8();
        }
        if (func_0219F0(obj[5], -1) == 0 && obj[5] != 7) {
            D_0019E088 = obj[5];
        }
        func_0BF470();
    }
    func_0C7A30(D_0026BD20, saved);
}
