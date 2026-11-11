/* LEVEL_08:0x0DA5E8 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_0037BC20[];
extern int *D_0023CB2C;
extern int D_0024D468[1];
extern int D_0024C350;
extern char D_0024C359;
extern int D_0024C354;
extern int D_002458C8;

extern int *func_0E33C8(int *a);
extern unsigned int *func_024EA8(int id, int v);
extern unsigned int *func_024EF0(int id, int v);
extern int func_0DA488(int *obj);
extern int func_0DA448(int *obj);
extern int func_0DA468(int *obj);
extern int func_0C6C50(void);
extern void func_024B28(int a, int b);
extern void func_0DB7E0(void);
extern int func_0BEA78(int v);
extern int func_025AD8(int a, int b, int c, int d);
extern int func_024E48(int a, int b);
extern void func_0259A0(int a, int b, int c, int d);
extern void func_16A390(void);
extern int func_0E3DC8(int *a, int b);

void func_0DA5E8(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0E33C8(D_0037BC20);
    p2 = func_024EA8(obj[5], -1);
    p3 = func_024EF0(obj[5], -1);
    D_0024D468[0] = 0;
    D_0023CB2C[0x71A] = D_0023CB2C[0x71A] - D_0024C350;
    saved = D_0037BC20[3];
    D_0024C359 = 1;
    if (func_0DA488(obj) != 0) {
        func_024B28(0, func_0C6C50() != 0x12);
        func_0DB7E0();
    } else if (func_0DA448(obj) != 0) {
        p2[16] = p2[16] + D_0024C354;
        func_0BEA78(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0DB7E0();
    } else if (func_0DA468(obj) != 0) {
        func_025AD8(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_024E48(obj[5], -1) == 0) {
            D_002458C8 = obj[5];
        }
        func_0DB7E0();
    } else {
        func_0259A0(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_16A390();
        }
        if (func_024E48(obj[5], -1) == 0 && obj[5] != 7) {
            D_002458C8 = obj[5];
        }
        func_0DB7E0();
    }
    func_0E3DC8(D_0037BC20, saved);
}
