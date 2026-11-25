/* LEVEL_19:0x15D6A8 -- sets up the module's shared state: creates its resource with two callbacks, patches the packed settings word from the lookup table, clears and fills the settings record and hashes four names into the global slots. */
typedef struct {
    char pad_00[0x68];
    unsigned int flags;
    int w6C;
    short h70;
    short h72;
    unsigned short h74;
    char pad_76[0x2E];
    unsigned char b_A4;
    unsigned char b_A5;
} Settings;

extern unsigned int D_0024E3C0[];
extern unsigned int D_001BF02C;
extern int D_001BF040;
extern int D_001BF044;
extern int D_001BF048;
extern int D_001BF04C;
extern int D_001BF050;
extern int D_001BF054;
extern Settings D_002E57F0;

extern int func_0EC308(int a, int b, int c, int d, int e, int f, void (*cb1)(void), void (*cb2)(void));
extern int func_0E8B20(unsigned int v);
extern int func_107538(unsigned int h);
extern void *memset(void *p, int v, unsigned int n);
extern void func_0EBBD0(void);
extern void func_0EC2D0(void);

void func_15D6A8(void)
{
    D_001BF040 = func_0EC308(0xB, D_0024E3C0[0x34 / 4], 0, 0, 1, 1, func_0EBBD0, func_0EC2D0);
    D_001BF02C = (D_001BF02C & 0xF800FFFFU) | (D_0024E3C0[(D_001BF02C >> 16) & 0x7FF] << 16);
    D_001BF044 = func_0E8B20(D_001BF02C);
    memset(&D_002E57F0, 0, 0xF8);
    D_002E57F0.h74 = *(unsigned short *)((char *)D_0024E3C0 + 0x68);
    D_002E57F0.b_A5 = 0x12;
    D_002E57F0.flags |= 6;
    D_002E57F0.h70 = D_002E57F0.b_A4 = D_002E57F0.w6C = 1;
    D_001BF04C = func_107538(0x18D9A7CEU);
    D_001BF048 = func_107538(0x11CD981DU);
    D_001BF054 = func_107538(0x58B227F9U);
    D_001BF050 = func_107538(0xA64A563AU);
}
