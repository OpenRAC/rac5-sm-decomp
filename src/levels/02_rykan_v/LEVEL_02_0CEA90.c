/* LEVEL_02:0x0CEA90 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_139B98 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_00215BF2;
extern void (*D_00215B84)(void);
extern void func_13BA28(struct Obj *p);
extern void func_1393C0(int value);
extern void func_139368(void);
extern int func_139B98(void);
extern int func_139650(int step);

void func_0CEA90(struct Obj *p)
{
    func_13BA28(p);
    D_00215BF2 = 0;
    func_1393C0(0);
    func_139368();
    if (func_139B98() != 0) {
        if (D_00215B84 != 0)
            D_00215B84();
        func_139650(10);
        D_00215BF2 = 1;
    }
}
