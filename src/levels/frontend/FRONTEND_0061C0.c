/* FRONTEND:0x0061C0 -- 64-byte block copy, the global named twice.
   The destination pointer is read from the global, and the offset too; the
   retail keeps the global's address in $a1 from the first instruction. */
typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));

typedef struct {
    u128 q0;
    u128 q1;
    u128 q2;
    u128 q3;
} Block;

struct Global {
    int pad00;
    int off;
    int pad08;
    int pad0C;
    Block *dst;
};

extern struct Global D_0010EA90;

void func_0061C0(Block *src)
{
    Block *dst = D_0010EA90.dst;

    dst->q0 = src->q0;
    dst->q1 = src->q1;
    dst->q2 = src->q2;
    dst->q3 = src->q3;
    *(char *)((char *)&D_0010EA90 + D_0010EA90.off + 8) = 1;
}
