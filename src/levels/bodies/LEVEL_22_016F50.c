/* LEVEL_22:0x016F50 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_001817E8;
extern void func_017150(void);
extern int func_016E80(int a);
extern int func_016E98(int a);
extern void *func_016E18(int *p);
extern int func_0A9D78(void);
extern int func_0A9A60(void);
extern void func_0A9A70(int a);
extern void func_017038(void);

void func_016F50(void)
{
    int t;

    if (D_001817E8.pending == 0)
        return;
    if (D_001817E8.pending == D_001817E8.cur) {
        D_001817E8.pending = 0;
        return;
    }
    func_017150();
    while (func_016E80(6) && func_0A9D78() == 0)
        ;
    if (func_016E80(6) && func_016E98(4)) {
        D_001817E8.pending = func_0A9A60();
        func_0A9A70(0);
    } else if (func_016E98(6)) {
        func_016E18(&t);
        func_0A9A70(t);
    }
    D_001817E8.cur = D_001817E8.pending;
    D_001817E8.pending = 0;
    func_017038();
}
