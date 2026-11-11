/* LEVEL_16:0x161848 -- packs a halfword of one global into the top bits of another, hashes the result into a third and runs the follow-up handler. */
extern unsigned int D_001BDDFC;
extern unsigned int D_0024E2A8;
extern int D_002E5368;
extern char D_001BDE00[];
extern int func_0E7A98(unsigned int value);
extern void func_0E6868(char *p);

void func_161848(void)
{
    unsigned int w = (D_001BDDFC & 0xF800FFFFu) | (D_0024E2A8 << 16);

    D_001BDDFC = w;
    D_002E5368 = func_0E7A98(w);
    func_0E6868(D_001BDE00);
}
