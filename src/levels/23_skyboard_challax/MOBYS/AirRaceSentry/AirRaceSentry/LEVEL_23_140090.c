/* LEVEL_23:0x140090 -- resolves the resource handles of the screen, selects entry 0x24 and allocates and clears a zeroed table sized by the object's count. */
extern void *memset(void *s, int c, unsigned int n);
extern int func_0FCCA0(unsigned int value);
extern int func_11AEE0(unsigned int value);
extern void func_0E2630(int index);
extern void *func_101FC8(int size, int a, const char *file, int line);

extern int D_0026921C;
extern int D_00363618[];
extern int D_001DA984;
extern const char D_001EFC58[];

void func_140090(char *object)
{
    unsigned int tag;

    tag = (D_0026921C << 16) | 0x50003059U;
    D_00363618[0x80 / 4] = 0;
    D_00363618[0xC4 / 4] = tag;
    D_00363618[0xC8 / 4] = func_0FCCA0(tag);
    D_00363618[0xD4 / 4] = func_11AEE0(0x2971520FU);
    D_00363618[0xD8 / 4] = func_11AEE0(0x2CBD221CU);
    func_0E2630(0x24);
    D_001DA984 = (int)func_101FC8(*(int *)(object + 0x30) * 4, 0, D_001EFC58, 0x2E3);
    memset((void *)D_001DA984, 0, *(int *)(object + 0x30) * 4);
}
