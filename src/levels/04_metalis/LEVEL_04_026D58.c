/* LEVEL_04:0x026D58 -- placement copy of FRONTEND_002F80.c: installs and resets the global state block. */
extern unsigned int D_0020D12C;
extern unsigned char MCP_WideScreenMaster;
extern int func_026D00(void);
extern int func_026D50(void);
extern int func_0270C0(int force);
extern void func_027A58(void);
extern void func_024030(void);
extern void func_0281D0(void);
extern int func_204438(float v);
extern float SND_GetGlobalMusicVolume__Fv(void);
extern char *strncpy(char *, const char *, unsigned int);
extern void *memset(void *, int, unsigned int);

#define W(off) (*(int *)(D_0020D12C + (off)))
#define F(off) (*(float *)(D_0020D12C + (off)))

void func_026D58(unsigned int g, int arg)
{
    char saved[0x100];

    D_0020D12C = g;
    *(int *)(g + 0x1C70) = -1;
    if (func_026D00() && !arg)
        return;
    strncpy(saved, (char *)(D_0020D12C + 0x60), 0x20);
    memset((void *)D_0020D12C, 0, 0x13F60);
    strncpy((char *)(D_0020D12C + 0x60), saved, 0x20);
    func_027A58();
    func_024030();
    func_0270C0(arg);
    *(char *)D_0020D12C = 1;
    W(0x1C74) = 0;
    W(0x1C6C) = 1;
    W(0x13720) = 0;
    W(0x13728) = 0;
    W(0x1C78) = 0;
    W(0x13F40) = 0;
    W(0x1C70) = -1;
    {
        int v = func_204438(SND_GetGlobalMusicVolume__Fv() * 255.0f);

        W(8) = 0;
        W(0xC) = 0;
        W(0x14) = 1;
        W(0x10) = 1;
        W(0x18) = v;
    }
    W(0x1C) = 255;
    W(0x48) = -1;
    W(0x4C) = -1;
    W(0x24) = 0;
    F(0x28) = 1.0f;
    F(0x2C) = -1.0f;
    F(0x30) = 1.0f;
    F(0x34) = 1.0f;
    W(0x38) = 1;
    W(0x44) = 3;
    W(0x50) = 2;
    W(0x3C) = func_026D50();
    W(0x40) = 0;
    func_0281D0();
    W(0x20) = MCP_WideScreenMaster;
}
