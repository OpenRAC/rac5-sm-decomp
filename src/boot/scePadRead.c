/* boot:0x01EA3F60 -- copies the latest pad data of an open port and slot into the caller's buffer and returns its length. Ported from OpenRAC/rac4-decomp src/core/0013BA20.c (func_0013BA20). */
typedef struct {
    unsigned char data[0x58];
    int frame;
    unsigned char pad5C[0x80 - 0x5C];
} PadData;
typedef struct {
    unsigned char pad0[0x10];
    int open;
    unsigned char pad14[0x1C - 0x14];
} PadSlot;
extern PadSlot D_01FD3650[2][4];
extern void *memcpy(void *, const void *, int);
extern void func_01EA3E08(int, int, void *);

int scePadRead(int port, int slot, void *dst) {
    PadData out;
    if (D_01FD3650[port][slot].open == 0) {
        return 0;
    }
    func_01EA3E08(port, slot, &out);
    memcpy(dst, &out, ((int *)&out)[0x18]);
    return ((int *)&out)[0x18];
}
