/* LEVEL_22:0x105F60 -- resolves the current checkpoint/finish state of the active race: reads the stage and goal flags, either reports an empty state, or checks the two special stage pairs (unlocking the bonus entries and posting their notices) and the finish text, reporting the stage, flags, a pending-reward value and whether anything was started. */
extern int sprintf(char *buf, int fmt, int b, int c);

extern int D_00177C70;
extern int D_00153258;
extern int D_0015325C;
extern char D_002A73B0[];
extern char D_002A7430[];

extern int func_105888(void);
extern int func_1058E0(void);
extern int func_1058B8(void);
extern void func_105910(int value);
extern void func_105940(unsigned int value);
extern void func_105968(int a);
extern int func_105EC0(int a, int b);
extern int func_1063B8(int a, int b);
extern int func_106498(int a, int b);
extern int func_01FD00(int category, int selector);
extern void func_01FF00(int a, int b, int c, int d);
extern void func_021500(int a0, int a1, int a2, int a3, int t0, int t1, int t2, int t3);
extern void func_021ED8(int a, int b, int c);
extern int func_1059B8(int a);
extern int func_0003B8(int a0);
extern int func_0001A8(int value);
extern int func_000200(int index);
extern int func_109980(int a);
extern void func_0A7500(void *first, void *second, void *third);
extern void func_000300(int i);
extern int func_105B20(int a, int b, int idx);
extern void func_042EB0(int amount);

int func_105F60(char *p1, char *p2, char *p3, char *p4, int *p5, char *p6)
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

    stage = func_105888();
    started = 0;
    reward = 0;
    goal = func_1058E0();
    done = func_1058B8();
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
        func_105910(5);
        func_105940(0);
        func_105968(0);
        return 0;
    }
    g3 = 0;
    if (D_00177C70 == 3 || D_00177C70 == 0x16)
        g3 = 1;
    g6 = 0;
    if (D_00177C70 == 6 || D_00177C70 == 0x17)
        g6 = 1;
    key = func_105EC0(stage, 0xFF);
    c3 = goal != 0 && key == 0;
    func_1063B8(stage, 0xFF);
    if (goal != 0)
        func_106498(stage, 0xFF);
    func_105910(5);
    func_105968(0);
    if (goal != 0) {
        if (g3 && stage == 0 && func_01FD00(0x14, -1) == 0) {
            func_01FF00(0x14, 1, -1, 1);
            started = 1;
            D_00153258 = 4;
            D_0015325C = 3;
            func_021500(3, 4, 0, 0, 0, 0, -1, 1);
            func_021ED8(8, 1, 4);
            func_021ED8(0xA6, 1, 4);
        }
        if (goal != 0 && g6 && stage == 0 && func_01FD00(0x12, -1) == 0) {
            func_01FF00(0x12, 1, -1, 1);
            started = 1;
            D_00153258 = 4;
            D_0015325C = 6;
            func_021500(6, 4, 0, 0, 0, 0, -1, 1);
            func_021ED8(0xE, 1, 4);
            func_021ED8(0xAC, 1, 4);
        }
    }
    if (g3 && func_1059B8(0xFF) != 0 && func_0003B8(6) == 0) {
        a = func_109980(0x40B);
        b = func_109980(func_0001A8(6));
        c = func_109980(func_000200(6));
        sprintf(D_002A73B0, a, b, c);
        func_0A7500(D_002A73B0, 0, (void *)0x5A);
        func_000300(6);
        started = 1;
    }
    if (g6 && func_1059B8(0xFF) != 0 && func_0003B8(0xF) == 0) {
        a = func_109980(0x40B);
        b = func_109980(func_0001A8(0xF));
        c = func_109980(func_000200(0xF));
        sprintf(D_002A7430, a, b, c);
        func_0A7500(D_002A7430, 0, (void *)0x5A);
        func_000300(0xF);
        started = 1;
    }
    if (goal != 0 && !started) {
        reward = func_105B20(stage, 0xFF, key);
        func_042EB0(reward);
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
