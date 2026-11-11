/* LEVEL_20:0x0A9268 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_0019E260[];
extern int *D_00104194;
extern int D_00114B38[1];
extern int D_00113A20;
extern char D_00113A29;
extern int D_00113A24;
extern int D_0010D168;

extern int *func_0B2020(int *a);
extern unsigned int *func_01EDC8(int id, int v);
extern unsigned int *func_01EE10(int id, int v);
extern int func_0A9108(int *obj);
extern int func_0A90C8(int *obj);
extern int func_0A90E8(int *obj);
extern int func_095350(void);
extern void func_01E900(int a, int b);
extern void func_0AA460(void);
extern int func_08CB00(int v);
extern int func_01F850(int a, int b, int c, int d);
extern int func_01ED70(int a, int b);
extern void func_01F770(int a, int b, int c, int d);
extern void func_0F7960(void);
extern int func_0B2A20(int *a, int b);

void func_0A9268(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0B2020(D_0019E260);
    p2 = func_01EDC8(obj[5], -1);
    p3 = func_01EE10(obj[5], -1);
    D_00114B38[0] = 0;
    D_00104194[0x71A] = D_00104194[0x71A] - D_00113A20;
    saved = D_0019E260[3];
    D_00113A29 = 1;
    if (func_0A9108(obj) != 0) {
        func_01E900(0, func_095350() != 0x12);
        func_0AA460();
    } else if (func_0A90C8(obj) != 0) {
        p2[16] = p2[16] + D_00113A24;
        func_08CB00(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0AA460();
    } else if (func_0A90E8(obj) != 0) {
        func_01F850(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_01ED70(obj[5], -1) == 0) {
            D_0010D168 = obj[5];
        }
        func_0AA460();
    } else {
        func_01F770(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_0F7960();
        }
        if (func_01ED70(obj[5], -1) == 0 && obj[5] != 7) {
            D_0010D168 = obj[5];
        }
        func_0AA460();
    }
    func_0B2A20(D_0019E260, saved);
}
