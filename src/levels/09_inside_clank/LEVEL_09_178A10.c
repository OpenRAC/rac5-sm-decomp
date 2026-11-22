/* LEVEL_09:0x178A10 -- placement copy of LEVEL_01_184F80.c: runs the level setup passes, stores the packed settings handle, starts the sound set and releases the four assigned slots. */
typedef struct {
    char pad0[0xD8];
    int wD8;
    char padDC[0x14C - 0xDC];
    int w14C;
    char pad150[0x250 - 0x150];
} Slot;

extern char D_001F2140[];
extern unsigned int D_001F1F44;
extern unsigned int D_0027F76C;
extern int D_0037E158;
extern Slot D_0037D678[];

extern void func_170CC8(void);
extern void func_171820(void);
extern void func_175508(void);
extern void func_171B08(void);
extern void func_1D2C50(char *a0);
extern void func_1D2CE0(char *record);
extern void func_17BD40(void *arg);
extern void func_1BC348(char *p, int a1);
extern void func_0EB628(int index);
extern void func_000EBE90(int param_1);

void func_178A10(void)
{
    int i;
    Slot *s;

    func_170CC8();
    func_171820();
    func_175508();
    func_171B08();
    func_1D2C50(D_001F2140);
    func_1D2CE0(D_001F2140);
    D_0037E158 = ((int (*)(void *))func_17BD40)((void *)((D_001F1F44 & 0xF800FFFFu) | (D_0027F76C << 16)));
    func_1BC348((char *)&D_0037E158 + 0x50, 0);
    for (i = 0; i != 4; i++) {
        s = &D_0037D678[i];
        func_0EB628(s->w14C);
        if (s->wD8 != -1)
            func_000EBE90(s->wD8);
    }
}
