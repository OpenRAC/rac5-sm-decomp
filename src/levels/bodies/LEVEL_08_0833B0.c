/* LEVEL_08:0x0833B0 -- a 16-byte packet built on the stack and handed
   to func_0833E8.  The first 12 bytes come from the argument block,
   the last one is the float argument. */
typedef struct {
    float f[2];
    int x;
} F12;

typedef struct {
    F12 block;
    float v;
} Packet;

extern void func_0833E8(Packet *packet);

void func_0833B0(F12 *src, float v)
{
    Packet packet;

    packet.block = *src;
    packet.v = v;
    func_0833E8(&packet);
}
