/* LEVEL_01:0x0D7680 -- calls a test helper and dispatches on its result with code 0x22. */
extern int func_01A868(int);
extern int func_0BBD30(void);
extern void func_0BB3A8(int);
extern void func_0BC400(int, int);

void func_0D7680(void)
{
    if (func_01A868(6) != 0) {
        int code = func_0BBD30();
        if ((code ^ 0x22) != 0) {
            func_0BB3A8(0x22);
        }
    } else {
        func_0BC400(0x22, 0);
    }
}
