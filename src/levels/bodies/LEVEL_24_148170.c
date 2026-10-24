/* LEVEL_24.REL @ 0x148170 — 80 octets, swc1 */
extern char D_0035DC6C[];
extern char D_0035D9C8[];

void func_02BB18(char *a0, char *a1, char *a2, int a3, int a4);

void func_148170(int a0, int a1, int a2)
{
    *(short *)a0 = 0;
    func_02BB18((char *)a0 + 0x48, D_0035DC6C, D_0035D9C8, a1, a2);
    *(float *)(a0 + 0x80) = 60.0f;
}
