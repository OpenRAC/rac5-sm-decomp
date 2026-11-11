/* LEVEL_19:0x159ED0 -- patches the id bits of a global word and stores two hash lookups. */
extern unsigned int D_0024E3DC;
extern unsigned int D_001BEFDC;
extern int D_001BEFE0;
extern int D_001BEFE4;
extern int func_107538(unsigned int value);

void func_159ED0(void)
{
    D_001BEFDC = (D_001BEFDC & 0xF800FFFF) | (D_0024E3DC << 16);
    D_001BEFE0 = func_107538(0xB57E0A29);
    D_001BEFE4 = func_107538(0xE7C5F2E2);
}
