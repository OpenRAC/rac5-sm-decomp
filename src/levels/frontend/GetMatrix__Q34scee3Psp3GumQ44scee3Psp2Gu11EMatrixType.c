/* FRONTEND:0x005FA0 -- returns one of the six stored buffer addresses. */
struct Global {
    int pad00;
    int off;
    unsigned char flags[6];
    unsigned char pad0E[2];
    void *dst;
    void *addr[6];
};

extern struct Global D_0010EA90;

void *GetMatrix__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int index)
{
    return D_0010EA90.addr[index];
}
