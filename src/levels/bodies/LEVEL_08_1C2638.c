/* LEVEL_08:0x1C2638 -- picks a table entry from a slot index and applies it to the object's sub-record. */

extern char D_00263A80[];
extern int D_00264470;

unsigned int func_0288B8(void);
void func_013450(char *a0, char *a1, int a2, int a3);
void func_1C1258(char *a0, unsigned int a1, unsigned char a2);

void func_1C2638(char *obj)
{
    char *tbl;
    char *s2;
    unsigned int slot;
    unsigned int off;
    float f;

    tbl = D_00263A80;
    s2 = *(char **)(obj + 0x58);
    slot = func_0288B8();
    off = (slot << 4) + 4;
    f = *(float *)&tbl[off + ((D_00264470 - 1) << 6)];
    *(int *)(s2 + 0x48) = 0;
    *(float *)(s2 + 0x40) = f;
    *(unsigned int *)(obj + 0x78) = (*(unsigned int *)(obj + 0x78) & 0xFFF0FFFFu) | 0x20000u;
    func_013450(s2, obj, 1, 0x10);
    *(unsigned char *)(s2 + 0x4C) = 0xFF;
    func_1C1258(obj, 0xFF, *(unsigned char *)(obj + 0x45));
}
