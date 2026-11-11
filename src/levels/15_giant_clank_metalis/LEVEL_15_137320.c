/* LEVEL_15:0x137320 -- runs the five update stages while the global enable
   byte is set. */
extern unsigned char D_0014ADEC;
extern void func_134500(void);
extern void func_134B70(void);
extern void func_134E20(void);
extern void func_135AF0(void);
extern void func_135CA8(void);

void func_137320(void)
{
    if (D_0014ADEC) {
        func_134500();
        func_134B70();
        func_134E20();
        func_135AF0();
        func_135CA8();
    }
}
