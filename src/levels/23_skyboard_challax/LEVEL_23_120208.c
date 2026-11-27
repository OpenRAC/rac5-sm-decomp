/* LEVEL_23:0x120208 -- placement copy of LEVEL_22_105F60.c: resolves the current checkpoint/finish state of the active race: reads the stage and goal flags, either reports an empty state, or checks the two special stage pairs (unlocking the bonus entries and posting their notices) and the finish text, reporting the stage, flags, a pending-reward value and whether anything was started. */
extern int sprintf(char *buf, int fmt, int b, int c);

extern int D_001ED970;
extern int D_001C72D8;
extern int D_001C72DC;
extern char D_00322E00[];
extern char D_00322E80[];

extern int func_11FB10(void);
extern int func_11FB68(void);
extern int func_11FB40(void);
extern void func_11FBB8(int value);
extern void func_11FBE8(unsigned int value);
extern void func_11FC10(int a);
extern int func_120168(int a, int b);
extern int func_120660(int a, int b);
extern int func_120740(int a, int b);
extern int func_022F68(int category, int selector);
extern int func_023168(int a, int b, int c, int d);
extern void func_0248C8(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_0252A0(int a, int b, int c);
extern int func_11FC60(int a);
extern int func_000520(int a0);
extern int func_0001A8(int value);
extern int func_000200(int index);
extern int func_123C28(int a);
extern void func_0AFDF0(void *first, void *second, void *third);
extern void func_000300(int i);
extern int func_11FDC8(int a, int b, int idx);
extern void func_046990(int amount);

int func_120208(char *p1, char *p2, char *p3, char *p4, int *p5, char *p6)
{
    int started;
    int reward;
    int g6;
    int key;
    int c3;
    int stage;
    int goal;
    int done;
    int g3;
    int a;
    int b;
    int c;

    stage = func_11FB10();
    started = 0;
    reward = 0;
    goal = func_11FB68();
    done = func_11FB40();
    if (done == 0 || stage == 4 || stage == 5) {
        if (p1 != 0)
            *p1 = 5;
        if (p2 != 0)
            *p2 = 0;
        if (p3 != 0)
            *p3 = 0;
        if (p4 != 0)
            *p4 = 0;
        if (p5 != 0)
            *p5 = 0;
        if (p6 != 0)
            *p6 = 0;
        func_11FBB8(5);
        func_11FBE8(0);
        func_11FC10(0);
        return 0;
    }
    g3 = 0;
    if (D_001ED970 == 3 || D_001ED970 == 0x16)
        g3 = 1;
    g6 = 0;
    if (D_001ED970 == 6 || D_001ED970 == 0x17)
        g6 = 1;
    key = func_120168(stage, 0xFF);
    c3 = goal != 0 && key == 0;
    func_120660(stage, 0xFF);
    if (goal != 0)
        func_120740(stage, 0xFF);
    func_11FBB8(5);
    func_11FC10(0);
    if (goal != 0) {
        if (g3 && stage == 0 && func_022F68(0x14, -1) == 0) {
            func_023168(0x14, 1, -1, 1);
            started = 1;
            D_001C72D8 = 4;
            D_001C72DC = 3;
            func_0248C8(3, 4, 0, 0, 0, 0, -1, 1);
            func_0252A0(8, 1, 4);
            func_0252A0(0xA6, 1, 4);
        }
        if (goal != 0 && g6 && stage == 0 && func_022F68(0x12, -1) == 0) {
            func_023168(0x12, 1, -1, 1);
            started = 1;
            D_001C72D8 = 4;
            D_001C72DC = 6;
            func_0248C8(6, 4, 0, 0, 0, 0, -1, 1);
            func_0252A0(0xE, 1, 4);
            func_0252A0(0xAC, 1, 4);
        }
    }
    if (g3 && func_11FC60(0xFF) != 0 && func_000520(6) == 0) {
        a = func_123C28(0x40B);
        b = func_123C28(func_0001A8(6));
        c = func_123C28(func_000200(6));
        sprintf(D_00322E00, a, b, c);
        func_0AFDF0(D_00322E00, 0, (void *)0x5A);
        func_000300(6);
        started = 1;
    }
    if (g6 && func_11FC60(0xFF) != 0 && func_000520(0xF) == 0) {
        a = func_123C28(0x40B);
        b = func_123C28(func_0001A8(0xF));
        c = func_123C28(func_000200(0xF));
        sprintf(D_00322E80, a, b, c);
        func_0AFDF0(D_00322E80, 0, (void *)0x5A);
        func_000300(0xF);
        started = 1;
    }
    if (goal != 0 && !started) {
        reward = func_11FDC8(stage, 0xFF, key);
        func_046990(reward);
    }
    if (p1 != 0)
        *p1 = stage;
    if (p2 != 0)
        *p2 = goal;
    if (p3 != 0)
        *p3 = c3;
    if (p4 != 0)
        *p4 = started;
    if (p5 != 0)
        *p5 = reward;
    return 1;
}
