/* LEVEL_09:0x0C5430 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_12C780 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_001EAA32;
extern void (*D_001EA9C4)(void);
extern void func_12E610(struct Obj *p);
extern void func_12BFA8(int value);
extern void func_12BF50(void);
extern int func_12C780(void);
extern int func_12C238(int step);

void func_0C5430(struct Obj *p)
{
    func_12E610(p);
    D_001EAA32 = 0;
    func_12BFA8(0);
    func_12BF50();
    if (func_12C780() != 0) {
        if (D_001EA9C4 != 0)
            D_001EA9C4();
        func_12C238(10);
        D_001EAA32 = 1;
    }
}
