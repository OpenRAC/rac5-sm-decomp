/* FRONTEND:0x005D98 -- raises one bit of the shared flag word. */
struct Flags {
    char pad[0x20D0];
    unsigned int bits;
};

extern struct Flags D_0010C510;

void func_005D98(int bit)
{
    D_0010C510.bits |= 1 << bit;
}
