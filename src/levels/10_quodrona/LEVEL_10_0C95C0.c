/* LEVEL_10:0x0C95C0 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_131668 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_00209C32;
extern void (*D_00209BC4)(void);
extern void func_1334F8(struct Obj *p);
extern void func_130E70(int value);
extern void func_130E18(void);
extern int func_131668(void);
extern int func_131120(int step);

void func_0C95C0(struct Obj *p)
{
    func_1334F8(p);
    D_00209C32 = 0;
    func_130E70(0);
    func_130E18();
    if (func_131668() != 0) {
        if (D_00209BC4 != 0)
            D_00209BC4();
        func_131120(10);
        D_00209C32 = 1;
    }
}
