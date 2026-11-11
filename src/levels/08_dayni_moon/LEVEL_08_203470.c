/* LEVEL_08:0x203470 -- primes a block with a fixed value, then issues three helper calls on the block and its sub-block. */

void func_0AA418(void *a0, int a1);
void func_038978(void *a0, int a1, unsigned int a2);
void func_038958(void *a0, unsigned int a1, unsigned int a2, int a3);
void func_038940(void *a0);
extern unsigned char D_00278888[];

struct Y {
    unsigned char pad00[4];
    int w04;
};

void func_203470(unsigned char *a0, struct Y *a1)
{
    unsigned char *s2;

    func_0AA418(a0, (int)D_00278888);
    s2 = a0 + 0xCC;
    func_038978(a0 + 0x1C, a1->w04, 0xFFFF);
    func_038958(s2, 0xFFFFFFFF, 0xFFFFFFFF, 0);
    func_038940(s2);
}
