/* FRONTEND.REL:0x002F80: reviewed 476-byte candidate, held for ABI review.
 * Installs and resets the global state block.
 * pinned C with gnu-ee-trial links 476/476 bytes and is byte-exact at this and
 * 20 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned int D_00027E9C;
extern unsigned char MCP_WideScreenMaster;
extern int func_002F28(void);
extern int func_002F78(void);
extern int func_0032E8(int a);
extern void func_0036D8(void);
extern void func_003B58(void);
extern void func_003968(void);
extern int func_0240A0(float v);
extern float SND_GetGlobalMusicVolume__Fv(void);
extern char *strncpy(char *, const char *, unsigned int);
extern void *memset(void *, int, unsigned int);

#define W(off) (*(int *)(D_00027E9C + (off)))
#define F(off) (*(float *)(D_00027E9C + (off)))

void func_002F80(unsigned int g, int arg)
{
    char saved[0x100];

    D_00027E9C = g;
    *(int *)(g + 0x1C70) = -1;
    if (func_002F28() && !arg)
        return;
    strncpy(saved, (char *)(D_00027E9C + 0x60), 0x20);
    memset((void *)D_00027E9C, 0, 0x13F60);
    strncpy((char *)(D_00027E9C + 0x60), saved, 0x20);
    func_0036D8();
    func_003B58();
    func_0032E8(arg);
    *(char *)D_00027E9C = 1;
    W(0x1C74) = 0;
    W(0x1C6C) = 1;
    W(0x13720) = 0;
    W(0x13728) = 0;
    W(0x1C78) = 0;
    W(0x13F40) = 0;
    W(0x1C70) = -1;
    {
        int v = func_0240A0(SND_GetGlobalMusicVolume__Fv() * 255.0f);

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
    W(0x3C) = func_002F78();
    W(0x40) = 0;
    func_003968();
    W(0x20) = MCP_WideScreenMaster;
}
