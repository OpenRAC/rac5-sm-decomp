/* LEVEL_19:0x15C570 -- stores three hash lookups into globals and merges a global field into bits 16-26 of a flags word. */
extern unsigned int D_001BF004;
extern int D_001BF008;
extern int D_001BF00C;
extern int D_001BF010;
extern int D_0024E46C;
extern int func_107538(unsigned int value);

void func_15C570(void)
{
    D_001BF008 = func_107538(0xE8FFDF58u);
    D_001BF010 = func_107538(0x729616D7u);
    D_001BF00C = func_107538(0x845D986Cu);
    D_001BF004 = (D_001BF004 & 0xF800FFFFu) | (D_0024E46C << 16);
}
