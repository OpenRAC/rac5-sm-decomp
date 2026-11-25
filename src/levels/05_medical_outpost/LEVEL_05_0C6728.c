/* LEVEL_05:0x0C6728 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_12F160 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_001EFFB2;
extern void (*D_001EFF44)(void);
extern void func_130FF0(struct Obj *p);
extern void func_12E988(int value);
extern void func_12E930(void);
extern int func_12F160(void);
extern int func_12EC18(int step);

void func_0C6728(struct Obj *p)
{
    func_130FF0(p);
    D_001EFFB2 = 0;
    func_12E988(0);
    func_12E930();
    if (func_12F160() != 0) {
        if (D_001EFF44 != 0)
            D_001EFF44();
        func_12EC18(10);
        D_001EFFB2 = 1;
    }
}
