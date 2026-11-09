/* LEVEL_04:0x0D6668 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_029B58(void);
void func_0BC930(void *p);
void func_0BC670(void);
void func_13F720(void *p);
void func_0BB828(int v);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_0020D12C;
extern unsigned char D_0021C959;
extern void *D_00234170;

void func_0D6668(void)
{
    func_029B58();
    func_0BC930(D_0020D12C->p1C68);
    func_0BC670();
    if (D_0021C959 != 0) {
        func_13F720(D_00234170);
    }
    func_0BB828(7);
}
