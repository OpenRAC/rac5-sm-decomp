/* FRONTEND:0x01B850 -- engine reset sequence. */
extern void func_0066E0(int);
extern void func_01B330(void);
extern void func_01B758(void);
extern void func_0197F8(void);
extern void func_006850(int, unsigned int);

void func_01B850(void)
{
    func_0066E0(1);
    func_01B330();
    func_01B758();
    func_0197F8();
    func_006850(0, 0xFFFFFFFF);
}
