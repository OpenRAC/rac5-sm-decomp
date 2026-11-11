/* LEVEL_01:0x0CF640 -- applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_0032C9A0[];
extern int *D_001F3FAC;
extern int D_002045A8[1];
extern int D_00203490;
extern char D_00203499;
extern int D_00203494;
extern int D_001FCA08;

extern int *func_0D83F8(int *a);
extern unsigned int *func_024628(int id, int v);
extern unsigned int *func_024670(int id, int v);
extern int func_0CF4E0(int *obj);
extern int func_0CF4A0(int *obj);
extern int func_0CF4C0(int *obj);
extern int func_0BBD30(void);
extern void func_0242A8(int a, int b);
extern void func_0D0838(void);
extern int func_0B3CA0(int v);
extern int func_025258(int a, int b, int c, int d);
extern int func_0245C8(int a, int b);
extern void func_025120(int a, int b, int c, int d);
extern void func_156E20(void);
extern int func_0D8DF8(int *a, int b);

void func_0CF640(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0D83F8(D_0032C9A0);
    p2 = func_024628(obj[5], -1);
    p3 = func_024670(obj[5], -1);
    D_002045A8[0] = 0;
    D_001F3FAC[0x71A] = D_001F3FAC[0x71A] - D_00203490;
    saved = D_0032C9A0[3];
    D_00203499 = 1;
    if (func_0CF4E0(obj) != 0) {
        func_0242A8(0, func_0BBD30() != 0x12);
        func_0D0838();
    } else if (func_0CF4A0(obj) != 0) {
        p2[16] = p2[16] + D_00203494;
        func_0B3CA0(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0D0838();
    } else if (func_0CF4C0(obj) != 0) {
        func_025258(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_0245C8(obj[5], -1) == 0) {
            D_001FCA08 = obj[5];
        }
        func_0D0838();
    } else {
        func_025120(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_156E20();
        }
        if (func_0245C8(obj[5], -1) == 0 && obj[5] != 7) {
            D_001FCA08 = obj[5];
        }
        func_0D0838();
    }
    func_0D8DF8(D_0032C9A0, saved);
}
