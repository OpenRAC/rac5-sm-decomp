/* FRONTEND:0x005FC0 -- lays out up to six consecutive buffers after a base address, records which exist, then runs the setup call for each and seeds the last one. */
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
    unsigned char flags[6];
    unsigned char pad0E[2];
    Block *dst;
    unsigned int addr[6];
};

extern struct Global D_0010EA90;
extern Block D_0002AFD0;
extern void func_006158(void);

void func_005FC0(void *base, unsigned int n0, unsigned int n1, unsigned int n2, unsigned int n3, unsigned int n4, unsigned int n5)
{
    unsigned int a0;
    unsigned int a1;
    unsigned int a2;
    unsigned int a3;
    unsigned int a4;
    unsigned int a5;
    int i;
    Block *dst;

    a0 = (unsigned int)base & 0x1FFFFFFF;
    a1 = a0 + (n0 << 6);
    a2 = a1 + (n1 << 6);
    a3 = a2 + (n2 << 6);
    a4 = a3 + (n3 << 6);
    a5 = a4 + (n4 << 6);
    D_0010EA90.addr[0] = n0 != 0 ? a0 : 0;
    D_0010EA90.addr[1] = n1 != 0 ? a1 : 0;
    D_0010EA90.addr[2] = n2 != 0 ? a2 : 0;
    D_0010EA90.addr[3] = n3 != 0 ? a3 : 0;
    D_0010EA90.addr[4] = n4 != 0 ? a4 : 0;
    D_0010EA90.addr[5] = n5 != 0 ? a5 : 0;
    D_0010EA90.flags[0] = n0 != 0;
    D_0010EA90.flags[1] = n1 != 0;
    D_0010EA90.flags[2] = n2 != 0;
    D_0010EA90.flags[3] = n3 != 0;
    D_0010EA90.flags[4] = n4 != 0;
    D_0010EA90.flags[5] = n5 != 0;
    for (i = 0; i < 6; i++) {
        if (D_0010EA90.flags[i] != 0) {
            D_0010EA90.dst = (Block *)D_0010EA90.addr[i];
            func_006158();
        }
    }
    dst = (Block *)D_0010EA90.addr[5];
    dst->q0 = D_0002AFD0.q0;
    dst->q1 = D_0002AFD0.q1;
    dst->q2 = D_0002AFD0.q2;
    dst->q3 = D_0002AFD0.q3;
    D_0010EA90.off = 2;
    D_0010EA90.dst = (Block *)D_0010EA90.addr[2];
}
