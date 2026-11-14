/* LEVEL_03:0x193F60 -- looks up four named handles and stores them in their globals. */
extern int D_00221428;
extern int D_0022142C;
extern int D_00221430;
extern int D_00221434;
extern int func_1282D0(unsigned int key);

void func_193F60(void)
{
    D_00221428 = func_1282D0(0x6379F7C4u);
    D_0022142C = func_1282D0(0x0D5296CFu);
    D_00221430 = func_1282D0(0x4B41239Au);
    D_00221434 = func_1282D0(0x466F9573u);
}
