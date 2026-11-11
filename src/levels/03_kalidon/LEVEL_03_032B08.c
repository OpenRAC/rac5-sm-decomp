/* LEVEL_03:0x032B08 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_0A06B0(int a);
extern void func_0A0690(int a);
extern void func_0A0800(int a, int b);
extern void func_0A0808(int a, int b);
extern void func_0A0810(int a, int b);
extern void func_0A0928(int a, int b, int c);
extern void func_0A0948(int a, int b, int c, int d, int e);
extern void func_093AD8(int a);
extern void func_0A0940(int a);
extern void func_0A07A8(unsigned int a);
extern void func_0A07F0(int a);

void func_032B08(int mode)
{
    if (mode == 0)
        func_0A06B0(4);
    else
        func_0A0690(4);
    func_0A0690(9);
    func_0A0690(5);
    func_0A0690(1);
    func_0A0800(1, 1);
    func_0A0808(0, 1);
    func_0A0810(0, 0);
    func_0A0928(6, 0, 0xFF);
    func_0A0948(0, 2, 3, 0, 0);
    func_093AD8(0);
    if (mode == 1) {
        func_0A06B0(0);
        func_0A0940(1);
    } else {
        func_0A0690(0);
        func_0A0940(0);
    }
    func_0A07A8(0xFFFFFFFF);
    func_0A07F0(0);
}
