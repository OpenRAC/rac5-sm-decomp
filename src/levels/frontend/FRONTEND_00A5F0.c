/* FRONTEND:0x00A5F0 -- refreshes the cached counter. */
extern unsigned char D_0002B17C[];
extern int D_0002B180[];

extern int func_006608(void);
extern int func_0065F8(void);

void func_00A5F0(void)
{
    if (D_0002B17C[0] != 0) {
        func_006608();
        if (func_0065F8() == D_0002B180[0] + 1)
            func_006608();
        D_0002B180[0] = func_0065F8();
    }
}
