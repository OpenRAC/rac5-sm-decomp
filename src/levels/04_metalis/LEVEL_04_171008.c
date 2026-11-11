/* LEVEL_04:0x171008 -- runs the shared setup and stores the handle returned for a fixed hash into a global. */
extern int D_00220E4C;
extern void func_1F32B8(void);
extern int func_1364E8(unsigned int value);

void func_171008(void)
{
    func_1F32B8();
    D_00220E4C = func_1364E8(0xDA6F64B6u);
}
