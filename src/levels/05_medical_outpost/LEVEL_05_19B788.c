/* LEVEL_05:0x19B788 -- placement copy of LEVEL_01_19D488.c: runs the one-time setup chain and marks it done. */
extern unsigned char D_001DE5C0;
extern void func_1C8E98(void);
extern void func_1C6540(void);
extern void func_1BFC70(void);
extern void func_1C3530(void);
extern void func_1BF540(void);
extern void func_1C0DB0(void);
extern void func_000A08(void);

void func_19B788(void)
{
    if (D_001DE5C0 == 0) {
        func_1C8E98();
        func_1C6540();
        func_1BFC70();
        func_1C3530();
        func_1BF540();
        func_1C0DB0();
        func_000A08();
        D_001DE5C0 = 1;
    }
}
