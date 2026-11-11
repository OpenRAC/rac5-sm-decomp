typedef struct {
    char pad[0x1C];
    int f1C;
    char pad2[0x28];
    int f48;
} H;

extern struct { H *p; } D_0023CB2C;
extern int D_0023CB34;

extern void func_000000(float a) __asm__("SND_SetGlobalVolume__Ff");

void func_0280F0(float v)
{
    H *h = D_0023CB2C.p;

    if (h->f48 < 0)
        h->f48 = h->f1C;
    func_000000((float)D_0023CB2C.p->f1C / 255.0f * v);
    D_0023CB34 = 5;
}
