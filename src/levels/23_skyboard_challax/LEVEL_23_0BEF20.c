/* LEVEL_23:0x0BEF20 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_124F60 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_001D4032;
extern void (*D_001D3FC4)(void);
extern void func_126DF0(struct Obj *p);
extern void func_124788(int value);
extern void func_124730(void);
extern int func_124F60(void);
extern int func_124A18(int step);

void func_0BEF20(struct Obj *p)
{
    func_126DF0(p);
    D_001D4032 = 0;
    func_124788(0);
    func_124730();
    if (func_124F60() != 0) {
        if (D_001D3FC4 != 0)
            D_001D3FC4();
        func_124A18(10);
        D_001D4032 = 1;
    }
}
