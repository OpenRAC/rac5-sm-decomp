/* LEVEL_07:0x0CA1E0 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_1367E8 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_00214F32;
extern void (*D_00214EC4)(void);
extern void func_138678(struct Obj *p);
extern void func_136010(int value);
extern void func_135FB8(void);
extern int func_1367E8(void);
extern int func_1362A0(int step);

void func_0CA1E0(struct Obj *p)
{
    func_138678(p);
    D_00214F32 = 0;
    func_136010(0);
    func_135FB8();
    if (func_1367E8() != 0) {
        if (D_00214EC4 != 0)
            D_00214EC4();
        func_1362A0(10);
        D_00214F32 = 1;
    }
}
