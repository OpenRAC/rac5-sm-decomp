/* LEVEL_20:0x0A1320 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_0E3340 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_0011138A;
extern void (*D_0011131C)(void);
extern void func_0E4B30(struct Obj *p);
extern void func_0E2B80(int value);
extern void func_0E2B58(void);
extern int func_0E3340(void);
extern int func_0E2D48(int step);

void func_0A1320(struct Obj *p)
{
    func_0E4B30(p);
    D_0011138A = 0;
    func_0E2B80(0);
    func_0E2B58();
    if (func_0E3340() != 0) {
        if (D_0011131C != 0)
            D_0011131C();
        func_0E2D48(10);
        D_0011138A = 1;
    }
}
