/* LEVEL_05:0x0CF378 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_028D28(void);
void func_0B56D0(void *p);
void func_0B5410(void);
int func_12EC18(void *p);
extern int func_0B45C8(int a);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_001E332C;
extern unsigned char D_001F2819;
extern void *D_002096F0;

void func_0CF378(void)
{
    func_028D28();
    func_0B56D0(D_001E332C->p1C68);
    func_0B5410();
    if (D_001F2819 != 0) {
        func_12EC18(D_002096F0);
    }
    func_0B45C8(7);
}
