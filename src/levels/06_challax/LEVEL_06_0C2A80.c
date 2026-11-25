/* LEVEL_06:0x0C2A80 -- placement copy of LEVEL_24_0C1A48.c: placement copy of LEVEL_01_0C8180.c: resets the menu state and runs the shared setup; when func_129EB8 succeeds, runs the optional hook, queues step 10 and marks the state active. */
struct Obj;

extern unsigned char D_001EFB32;
extern void (*D_001EFAC4)(void);
extern void func_12BD48(struct Obj *p);
extern void func_1296E0(int value);
extern void func_129688(void);
extern int func_129EB8(void);
extern int func_129970(int step);

void func_0C2A80(struct Obj *p)
{
    func_12BD48(p);
    D_001EFB32 = 0;
    func_1296E0(0);
    func_129688();
    if (func_129EB8() != 0) {
        if (D_001EFAC4 != 0)
            D_001EFAC4();
        func_129970(10);
        D_001EFB32 = 1;
    }
}
