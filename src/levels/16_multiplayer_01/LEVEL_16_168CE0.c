/* LEVEL_16:0x168CE0 -- copies six words between two tables, merges a tagged field into the packed word and stores the handle resolved for another tagged key. */
extern void func_0811B8(void *dst, void *src, int n);
extern int func_05EE08(unsigned int value);

extern char D_002E5820[];
extern char D_002E54C0[];
extern unsigned int D_0024E240[];
extern unsigned int D_001BE080;
extern int D_001BE038;

void func_168CE0(void)
{
    func_0811B8(D_002E5820, D_002E54C0, 6);
    D_001BE080 = (D_001BE080 & 0xF800FFFFU) | (D_0024E240[0xAC / 4] << 16);
    D_001BE038 = func_05EE08((D_0024E240[0x1E0 / 4] << 16) | 0x800060C1U);
}
