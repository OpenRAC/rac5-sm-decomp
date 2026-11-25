/* LEVEL_17:0x0B6330 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_10FAD0 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_001A22AA;
extern void (*D_001A223C)(void);
extern void func_1112C0(struct Obj *p);
extern void func_10F310(int value);
extern void func_10F2E8(void);
extern int func_10FAD0(void);
extern int func_10F4D8(int step);

void func_0B6330(struct Obj *p)
{
    func_1112C0(p);
    D_001A22AA = 0;
    func_10F310(0);
    func_10F2E8();
    if (func_10FAD0() != 0) {
        if (D_001A223C != 0)
            D_001A223C();
        func_10F4D8(10);
        D_001A22AA = 1;
    }
}
