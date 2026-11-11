/* FRONTEND:0x0062A0 -- copies the 64-byte block the global points to into the destination. */
typedef unsigned int u128 __attribute__((mode(TI), aligned(16)));

typedef struct {
    u128 q0;
    u128 q1;
    u128 q2;
    u128 q3;
} Block;

extern Block *D_0010EAA0;

void StoreMatrix__Q34scee3Psp3GumP14ScePspFMatrix4(Block *dst)
{
    Block *src = D_0010EAA0;

    dst->q0 = src->q0;
    dst->q1 = src->q1;
    dst->q2 = src->q2;
    dst->q3 = src->q3;
}
