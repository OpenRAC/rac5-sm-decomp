/* LEVEL_08:0x17C3B0 -- placement copy of LEVEL_04_171008.c: runs the shared setup and stores the handle returned for a fixed hash into a global. */
extern int D_00250934;
extern void func_21D628(void);
extern int func_13B5A0(unsigned int value);

void func_17C3B0(void)
{
    func_21D628();
    D_00250934 = func_13B5A0(0xDA6F64B6u);
}
