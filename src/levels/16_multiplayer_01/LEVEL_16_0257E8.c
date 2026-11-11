typedef struct {
    char pad[0x1C];
    int f1C;
    char pad2[0x28];
    int f48;
} H;

extern struct { H *p; } D_001A1AB4;
extern int D_001A1AE0;

extern void func_000000(float a) __asm__("SND_SetGlobalVolume__Ff");

void func_0257E8(float v)
{
    H *h = D_001A1AB4.p;

    if (h->f48 < 0)
        h->f48 = h->f1C;
    func_000000((float)D_001A1AB4.p->f1C / 255.0f * v);
    D_001A1AE0 = 5;
}
