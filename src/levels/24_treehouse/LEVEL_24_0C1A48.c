/* LEVEL_24:0x0C1A48 -- placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_1292E8 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_001D18B2;
extern void (*D_001D1844)(void);
extern void func_12B178(struct Obj *p);
extern void func_128B10(int value);
extern void func_128AB8(void);
extern int func_1292E8(void);
extern int func_128DA0(int step);

void func_0C1A48(struct Obj *p)
{
    func_12B178(p);
    D_001D18B2 = 0;
    func_128B10(0);
    func_128AB8();
    if (func_1292E8() != 0) {
        if (D_001D1844 != 0)
            D_001D1844();
        func_128DA0(10);
        D_001D18B2 = 1;
    }
}
