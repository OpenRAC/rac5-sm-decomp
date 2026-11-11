/* LEVEL_18:0x024118 -- placement copy of FRONTEND_002F80.c: installs and resets the global state block. */
extern unsigned int D_001A2F34;
extern unsigned char MCP_WideScreenMaster;
extern int func_0240C0(void);
extern int func_024110(void);
extern int func_024480(int force);
extern void func_025098(void);
extern void func_021350(void);
extern void func_025638(void);
extern int func_1981B8(float v);
extern float SND_GetGlobalMusicVolume__Fv(void);
extern char *strncpy(char *, const char *, unsigned int);
extern void *memset(void *, int, unsigned int);

#define W(off) (*(int *)(D_001A2F34 + (off)))
#define F(off) (*(float *)(D_001A2F34 + (off)))

void func_024118(unsigned int g, int arg)
{
    char saved[0x100];

    D_001A2F34 = g;
    *(int *)(g + 0x1C70) = -1;
    if (func_0240C0() && !arg)
        return;
    strncpy(saved, (char *)(D_001A2F34 + 0x60), 0x20);
    memset((void *)D_001A2F34, 0, 0x13F60);
    strncpy((char *)(D_001A2F34 + 0x60), saved, 0x20);
    func_025098();
    func_021350();
    func_024480(arg);
    *(char *)D_001A2F34 = 1;
    W(0x1C74) = 0;
    W(0x1C6C) = 1;
    W(0x13720) = 0;
    W(0x13728) = 0;
    W(0x1C78) = 0;
    W(0x13F40) = 0;
    W(0x1C70) = -1;
    {
        int v = func_1981B8(SND_GetGlobalMusicVolume__Fv() * 255.0f);

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
    W(0x3C) = func_024110();
    W(0x40) = 0;
    func_025638();
    W(0x20) = MCP_WideScreenMaster;
}
